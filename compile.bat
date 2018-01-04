@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --optimize 3 --installer --verbose --no-eigen %*
pause