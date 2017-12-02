#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in iunput */

int main(){

        int c, n1, nl, nw, nc, wl, state;

        int i, j;
        int ndigit[15];
        for (i=0; i<=15; ++i){
                ndigit[i]=0;
        }


        state=OUT;
        nl=nw=nc=wl=0;
        while ((c=getchar()) != EOF){
                ++nc;
                if(c=='\n')
                        ++nl;
                if(c == ' ' || c == '\n' || c == '\t'){
                        state=OUT;
                        ++ndigit[wl];
                        wl = 0;
                }
                else if (state ==OUT){
                        state = IN;
                        ++nw;
                        ++wl;
                }
                else if (state == IN){
                        ++wl;
                }
        }
        printf("%d %d %d %d\n", nl, nw, nc, wl);
        for (i = 0; i <=15; ++i){printf("%d\n", ndigit[i]);}

        for (i = 0; i <=15; ++i){
                j=0;
                printf("number of %d's \t", i);
                while ( j < ndigit[i] ){
                        printf("*");
                        ++j;
                }
        printf("\n");
        }

}
