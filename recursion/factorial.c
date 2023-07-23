#include<stdio.h>
void factorial(int n,int i)
{
    static int f=1;
    static int sum=0;
    if(i<=n)
    {
        f=f*i;
    factorial(n,i+1);
    }
    else
    {
    printf("%d",f);
    
    }
    


}
int main()
{
    int num,i=1;
    printf("enter a number ");
    scanf("%d",&num);
    factorial(num,i);
}