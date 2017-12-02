#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in iunput */

int main(){

        int c, n1, nl, nw, nc, state;

        int d;

        state=OUT;
        nl=nw=nc=0;
        while ((c=getchar()) != EOF){
                ++nc;
                if(c=='\n')
                        ++nl;
                if(c == ' ' || c == '\n' || c == '\t' ){
                        state=OUT;
                                if (d!=' ' && d != '\n' && d != '\t' )
                                        printf("\n");
                }
                else if (state ==OUT){
                        state = IN;
                        ++nw;
                        putchar(c);
                }
                else if (state == IN){
                        putchar(c);
                }
        d=c;
        }
        printf("%d %d %d\n", nl, nw, nc);
}
