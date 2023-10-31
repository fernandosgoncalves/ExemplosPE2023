#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *p;
    char *p1;
    char s[80];

    do{
        p1 = s;
        gets(s);
        while(*p1) printf("%d", *p1++);
    }while(strcmp(s, "done"));

    x = 10;
    p = &x;

    printf("%d\n", *p);
    return 0;
}
