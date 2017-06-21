#include <stdio.h>

#define IN 1
#define OUT 0

void main()
{

    int c, state;

    state = OUT;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            putchar(c);
            state = IN;
        }






    }



}