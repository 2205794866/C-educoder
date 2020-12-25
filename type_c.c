#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char buff[255];
    int i = 0;
    FILE *fp = NULL;
    if(argc != 3)
    {
        printf("Arguments error\n");
        return 0;
    }
    fp = fopen(argv[2], "r");
    if(!fp)
    {
        printf("Can't open %s file\n", argv[2]);
        return 0;
    }
    while(fgets(buff, 255, fp))
    {
        i++;
        printf("%d", i);
        printf("%s", buff);
        if(!strcmp(argv[1], "/p"))
        {
            if(i == 25)
            {
                printf("请按任意键继续");
                printf(":");
                getchar();
            }
        }
    }
    fclose(fp);
}