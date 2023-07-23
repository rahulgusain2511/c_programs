#include<stdio.h>
void natural(int a,int n )
{
    if(a<=n)
    {
        printf("%d",a);
        natural(a+1,n);
    }
}
int main()
{
    int b=1,c;
    printf("enter the limit");
    scanf("%d",&c);
    natural(b,c);
}