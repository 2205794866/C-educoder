#include<stdio.h>

int main()
{
    unsigned i = 0, j = 1;
    int b;
    int a;
    // printf("%d", j++?j++:i++);//2
    // printf("%d", i = i!= j); //1
    a = ~i^j;                   //-2
    printf("%d\n", a);
    b = 0xFFFFFFFE;
    printf("%d", b);
    // printf("%d", 2<<++i+j<<2);32
}