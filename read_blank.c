#include <stdio.h>

int main(){

        int c, d;
        d=0;

        while ((c=getchar())!=EOF){
                if (c==' '){
                        if(d!=' '){
                        putchar(c);
                        d=c;}
                }
                if (c!=' '){
                        putchar(c);
                        d=c;
                }
        }
}
