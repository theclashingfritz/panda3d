@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --installer --verbose --no-eigen %*
pause