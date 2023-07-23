#include<stdio.h>
int main()
{
    int a,b,i;
    int mul=0;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        mul=mul+a;

    }
    printf("multiplication is = %d",mul);
}