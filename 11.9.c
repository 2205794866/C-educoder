#include <stdio.h>
// #define STRING  char*

int main()
{
    typedef char* STRING;
    STRING a,b;
    char *s = "I love HUST";
    a = s;
    b = s;
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}