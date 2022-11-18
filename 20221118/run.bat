@echo off
title C++ File Maker

set NAME=dayCalculator

g++ %NAME%.cpp -o %NAME% -fexec-charset=GBK
%NAME%

pause
exit