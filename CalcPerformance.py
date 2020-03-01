from timeDiff import timeDiff
import time
#timeCheck = timeDiff()
def calc():
    sum =0
    time0 = time.time()
    for i in range(0,10000):
        for j in range(0,10000):
            sum =sum +i*i
    time1= time.time()
    diff = time1-time0
    print("the time diff is :%f" %diff)

    
if __name__=='__main__':
    st = calc()
    
