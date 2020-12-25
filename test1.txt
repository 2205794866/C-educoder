#include <stdio.h>
#define SEEK_SET 0 //文件起始位置为基准点
#define SEEK_CUR 1 //文件当前位置为基准点
#define SEEK_END 2 //文件尾部位置为基准点


int main(int argc, char *argv[])
{
    char buff[255];
    int i;
    FILE *fp1,*fp2 = NULL;
    if(argc < 3)
    {
        printf("Arguments error!\n");
        return 0;
    }
    fp1 = fopen(argv[1], "r");
    if(!fp1)
    {
        printf("Can't open %s file\n", argv[1]);
        return 0;
    }
    for(i = 2; i<argc; i++)
    {
        freopen(argv[i], "w", fp2);
        while(fgets(buff,255,fp1))
            fputs(buff, fp2);
        fseek(fp1, 0,SEEK_SET);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;


}