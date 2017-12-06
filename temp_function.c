#include <stdio.h>


/* print temps from celcius a to b in farenheit */

int temp( int a);

int main(){

        float farenheit, celcius;
        int bottom, top, inc;
        bottom=0;
        top=300;
        inc=20;

        while (farenheit<=top){
                celcius=temp(farenheit);
                printf("%3.0f\t%6.1f\n", farenheit, celcius);
                farenheit=farenheit + inc;
        }

}

int temp(int n){

        int f;
        f=5.0*(n-32.0)/9.0;
        return f;
}
