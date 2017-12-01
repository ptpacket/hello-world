#include <stdio.h>

/* print Fareignheit and then Celcius temps for 0-300 F */

int main()
{
        float farenheit, celcius;
        int bottom, top, inc;
        bottom=0;
        top=300;
        inc=20;


printf("heading\n");


        for (celcius = 300; celcius >= 0; celcius = celcius - 20){
                farenheit=(9.0/5.0) * celcius +32;
                printf("%3.0f %3.1f \n",celcius,farenheit);}

}
