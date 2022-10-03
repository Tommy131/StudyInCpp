@echo off
title C++ File Maker

set NAME=station

g++ %NAME%.cpp -o %NAME% -fexec-charset=GBK
%NAME%

pause
exit