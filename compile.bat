@echo off
thirdparty\win-python\python makepanda/makepanda.py --everything --optimize 3 --windows-sdk=10 --no-maya2016 --no-maya20165 --no-maya2018 --installer --verbose --no-eigen %*
pause