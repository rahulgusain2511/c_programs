#include<stdio.h>

int table(int m,int n)
{
    if(m < 11)
    {
        return n+table(m+1,n);
    }
}
int main()
{
    int i=1,tab,responce;
    printf("enter the number whose table is to be found");
    scanf("%d",&tab);
    responce = table(i,tab);
    printf("%d",responce);
    return 0;
}