#include <stdio.h>

int main(){

        int caps_letters[63], freq_letters[63];

        caps_letters[0] = 'A';

        int i;
        for (i = 1; i<=25; ++i){
                caps_letters[i]=caps_letters[i-1]+1;
        }
        caps_letters[26]='a';
        for (i = 27; i<=51; ++i){
                caps_letters[i]=caps_letters[i-1]+1;
        }
        caps_letters[52]=0;
        for (i = 53; i<=62; ++i){
                caps_letters[i]=caps_letters[i-1]+1;
        }
        for (i=0;i<=63;++i){freq_letters[i]=0;}


/* array of all the possibilities called caps_letters, then go through the input using getchar and adding 1 to the second array of frequency of the first */
        int c;
        while ((c= getchar()) != EOF)
                for (i=0; i<=62; ++i){
                        if(c==caps_letters[i]){++freq_letters[i];}
                }
        for (i = 0; i <= 52; ++i)
                printf("%c %d %d\n", caps_letters[i], caps_letters[i], freq_letters[i]);
}
