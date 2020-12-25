#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int ch;
    int i = 0;
    if(argc !=  3)
    {
        printf("Arguments error!\n");
        return -1;
    }
    fpos_t *fold;
    if(freopen(argv[2],"r", stdin) == NULL)
    {
        printf("Can't open %s file!\n", argv[2]);
        return -1;
    }
    while((ch = getchar())!= EOF)
    {
        putchar(ch);
        if(!strcmp(argv[1], "/p"))
        {   
            if(ch == '\n')
            {
               i++;
               printf("%d",i);
            }
            if(i == 25)
            {
                fgetpos(stdin, fold);
                freopen("CON", "w", stdin);
                printf("请按任意键继续\n");
                getchar();
                fsetpos(stdin, fold);
                i = 0;
            }
        }
    } 
    fclose(stdin);
    return 0;

}