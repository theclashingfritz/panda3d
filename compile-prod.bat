@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --verbose --optimize=4 --no-eigen %*
pause