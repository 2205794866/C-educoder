#include<stdio.h>

int main()
{
    struct T{
        int a[3], *pa;
        char b[20] , *pb;
    } s= {{-1,0,1}, s.a,"abcdef", s.b}, *ps = &s;
    // printf("%d\n", ++*s.a);
    // printf("%d", *s.a+2);
    // printf("%d", *(s.a+2));
    // printf("%d", ps->pa[1]++);
    // printf("%d", ++*++ps->pa);
    // printf("%s", *(s.b+2));
    // printf("%c", *(++s.pb)+2);
    // printf("%c", (++s.pb)[3]);
    // printf("%c", ps->pb[2]++);
    // char *p = &s.b[0];
    // (p++)++;
    // int a=1;
    // (a =;
    // printf("%d", a);

    printf("%p", (ps->pb++)++);

    return 0;
}