@echo off
setlocal enabledelayedexpansion

set source_folder=src
set build_folder=build

echo Start build...

if exist !build_folder! (
  echo Removing old build folder...
  rmdir /s /q !build_folder!
  echo Removed old build folder!
)

echo Creating new build folder...
mkdir !build_folder!
echo Created new build folder!

for %%f in (%source_folder%\*.cpp) do (
  set filename=%%~nf
  set file_input=%source_folder%/!filename!.cpp
  set file_output=%build_folder%/!filename!.exe
  echo Builing !filename!.cpp ...
  g++ "!file_input!" -o "!file_output!"
  echo Build !filename!.cpp done!
)


echo Build done!