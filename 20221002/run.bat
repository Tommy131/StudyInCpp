@echo off
title C++ File Maker

set NAME=pointer

g++ %NAME%.cpp -o %NAME% -fexec-charset=GBK
%NAME%

pause
exit