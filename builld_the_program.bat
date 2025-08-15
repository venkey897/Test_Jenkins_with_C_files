@echo off
setlocal enabledelayedexpansion

:: Set output directory and compiler
set "OUT_DIR=bin"
set "COMPILER=gcc"

:: Create output directory if it doesn't exist
if not exist "%OUT_DIR%" (
    mkdir "%OUT_DIR%"
)

:: Compile each .c file
for %%f in (*.c) do (
    echo Compiling %%f...
    "%COMPILER%" "%%f" -o "%OUT_DIR%\%%~nf.exe"
)

echo All files compiled.
