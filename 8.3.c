#include<stdio.h>
#define N 5
void sort(int *p, int n);


int main()
{
    int i,a[N];
    for(i = 0; i<N; i++)
    scanf("%d", &a[i]);
    sort(a,N);
    for(i = 0; i < N - 1; i++)
    printf("%d ", a[i]);
    printf("%d", a[i]);
    return 0;
}


void sort(int *p, int n)
{
    int i,j,temp;
    int *t;
    for(i = 0; i < n-1; i++)
    {
        t = p;
        for( j = 0; j < n-i-1; j++)
        {
            if(*t > *(t+1))
            {
                temp = *t;
                *t = *(t+1);
                *(t+1) = temp;
            }
            t++;
        }
    }
}