@echo off
title C++ File Maker

set NAME=math

g++ %NAME%.cpp -o %NAME% -fexec-charset=GBK
%NAME%

pause
exit