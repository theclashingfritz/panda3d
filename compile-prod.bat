@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --windows-sdk=10 --no-maya2016 --no-maya20165 --no-maya2018 --installer --verbose --optimize=4 --no-eigen %*
pause