#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <limits.h>
#include "time.h"

/*
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "my_lepton.hpp"


using namespace std;
using namespace cv;
*/

int main(void)
{
    int ret, i,j;
    int sum = 0;
    clock_t start,finish;
    double during;
    start =clock();
    for(i=0;i<10000;i++)
    {
        for(j=0;j<10000;j++)
        {
            sum = sum+i*i;
        }
    }
    finish = clock();
    during = (double)(finish-start)/CLOCKS_PER_SEC;
    printf("time diff:%f second\n",during);

    return 0;
}
