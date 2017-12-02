#include <stdio.h>

#define BOTTOM 0
#define TOP 300
#define INC 20

/* print Fareignheit and then Celcius temps for 0-300 F */

int main()
{
        float farenheit, celcius;
        int bottom, top, inc;

printf("heading\n");


        for (celcius = TOP; celcius >= BOTTOM; celcius = celcius - INC){
                farenheit=(9.0/5.0) * celcius +32;
                printf("%3.0f %3.1f \n",celcius,farenheit);}

}
