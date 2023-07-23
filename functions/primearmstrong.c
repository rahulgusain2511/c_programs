#include<stdio.h>
void primearmstrong(int a)
{
    int i,c=0,f,n,sum=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
        
    }
    if(c==2)
    {
        printf("%d is a prime number \n",a);
    }
    else
    {
        printf("%d is not a prime number\n",a);
    }
    f=a;
    while(a!=0)
    {
        n=a%10;
        sum=sum+(n*n*n);
        a=a/10;
    }
    if(f==sum)
    {
        printf("%d is a armstrong number",f);
    }
    else
    {
        printf("%d is not  a armstrong",f);
            
        
    }
    
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    primearmstrong(num);
}