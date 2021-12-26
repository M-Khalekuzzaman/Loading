#include<stdio.h>
fordelay(int j)
{
    int i,k;
    for(i = 0 ; i<j ; i++)
    {
        k = i;
    }
}
int main()
{
    printf("\n Loading");
    for(int i = 0; i<=6 ; i++)
    {
        fordelay(100000000);
        printf(".");
    }

    return 0;
}
