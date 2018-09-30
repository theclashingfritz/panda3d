@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --windows-sdk=10 --verbose --optimize=4 --no-eigen %*
pause