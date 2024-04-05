#include <string>
#include <vector>
#include <sstream>
#include <iostream>

std::vector<std::string> split(const std::string &str, const char &determiner)
{
  std::vector<std::string> tokens;
  int str_length = str.length();
  std::string token = "";
  for (int i = 0; i < str_length; i++)
  {
    if (str[i] == determiner)
    {
      tokens.push_back(token);
      token = "";
    }
    else
    {
      token = token + str[i];
    }
  }

  return tokens;
}

std::vector<std::string> split(const std::string &str, const std::string &determiner)
{
  std::vector<std::string> tokens;

  return tokens;
}

int main()
{
  std::string str = "a-b-___--c-d-e-f";
  std::vector<std::string> result = split(str, 'u');
  for (auto &i : result)
  {
    std::cout << i << std::endl;
  }
  return 1;
}