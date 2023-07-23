#include<stdio.h>
int strong(int x)
{
    int sum=0,f=1,m=0,r,i;
    int y=x;
    while(x>0)
    {
        r=x%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;   
        }
        sum=sum+f;
        // printf("%d\t",sum);
        f=1;
        x=x/10;
    }
    if(sum==y)
    {
        return 0;
    }
    else
    {
        
         return 1;   
        
    }
    printf("0=strong number\n1=not a strong number");
}
int main()
{
    int num,result;
    printf("enter a number");
    scanf("%d",&num);
    result = strong(num);
    if (result == 0)
    {
        printf("It is a strong number");
    } else {
        printf("It is not a strong number");
    }
    return 0;
}
