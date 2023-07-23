#include<stdio.h>
int table(int num)
{
    int i;
    for(i=1;i<10;i++)
    {
        printf("%d * %d = %d \n",num,i,num*i);
    }
}


int main()
{
    int t;
    printf("enter a number whose table is to be print ");
    scanf("%d",&t);
    table(t);
}