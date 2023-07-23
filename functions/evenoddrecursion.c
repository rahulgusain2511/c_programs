#include<stdio.h>
void evenodd(int b,int n)
{
    
    if(b<=n)
    {
        if(b%2==0)
        {
            printf("%d is even\n",b);
        }
        else
        {
            printf("%d is odd\n",b);
        }
        
        evenodd(b+1,n);
    }
    
}
int main()
{
    int c=1,limit;
    printf("enter limit");
    scanf("%d",&limit);
    evenodd(c,limit);
}