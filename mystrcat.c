#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[1000];
    char *ps = s;
    int i;
    for(i = 1; i<argc; i++)
    {
        char *pc;
        pc = argv[i];
        while(*pc != '\0')
        {
            if(*pc != ',')
                *ps++ = *pc;
            pc++;
        }
    }
    *ps = '\0';
    printf("%s", s);
    return 0;
}