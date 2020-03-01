# cpython-performance
compare cpython c/c++ and pypy performance

gcc ccalc.c -o ccalc
pi@raspberrypi:~/PROJECT/temp $ ./ccalc
time diff:0.678562 second

for cpp/c++
compile
g++ Ccalc.cpp -o Ccalc.a
run
pi@raspberrypi:~/PROJECT/temp $ ./Ccalc.a
time diff:0.659825 second

c/c++ is 60 times faster than  python,26 times faster than pypy.
there are test result using 100000000 times computation.

compare c/c++,python3, pypy performance
pi@raspberrypi:~/PROJECT/temp $ ./ccalc
time diff:0.678562 second
pi@raspberrypi:~/PROJECT/temp $ ^C
pi@raspberrypi:~/PROJECT/temp $ g++ Ccalc.cpp -o Ccalc.a
pi@raspberrypi:~/PROJECT/temp $ ./Ccalc.a
time diff:0.659825 second
pi@raspberrypi:~/PROJECT/temp $ python3 calc.py
the time diff is :36.714549
pi@raspberrypi:~/PROJECT/temp $ pypy calc.py
the time diff is :15.094903


