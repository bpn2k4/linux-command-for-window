#include <bits/stdc++.h>
#include "split.h"
using namespace std;

int main()
{
  string s = "123_______123_______123";
  vector<string> tokens = split(s, '_');
  for (const auto x : tokens)
  {
    cout << x << endl;
  }
  return 1;
}