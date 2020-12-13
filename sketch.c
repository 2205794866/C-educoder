#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 1; i<argc; i++)
    {
        char *pc = argv[i];
        while(*pc != '\0')
        {
            printf("%c\n", *pc);
            *pc++;
        }
    }
    return 0;
}
