@echo off
thirdparty\win-python3.7-x64\python makepanda/makepanda.py --everything --optimize 3 --no-fftw --windows-sdk=10 --no-maya2016 --no-maya20165 --no-maya2018 --installer --verbose --no-eigen %*
pause