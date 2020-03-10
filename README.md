# cpython-performance
to compare performance between c/c++ and python language
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

generate .so lib
1 gcc -shared psdcod.c -o psd.so
2 using .so in cpyhton
 1)import ctypes as C
 2)        if SERVER:
            self.so = C.CDLL('./psdcod.so')
        #else:
            #self.so = C.CDLL('psccod.dll')

         self.infrRGB = np.zeros([60, 80, 3], np.uint8)
        self.infr = np.zeros([60, 80, 1], np.uint16)

         def pgm2BGR2(self, img1):
        img =np.array(img1)
        self.so.pgm2BGR(img.ctypes.data_as(C.POINTER(C.c_ubyte)),self.infrRGB.ctypes.data_as(C.POINTER(C.c_ubyte)))
        newimg = cv.resize(self.infrRGB, (160, 120), interpolation=cv.INTER_NEAREST)
        #newimg = self.infrRGB
        return newimg

