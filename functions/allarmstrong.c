#include<stdio.h>

void armstrong(int x)
{
    int m,i,n,sum=0;
    for(i=11;i<=x;i++)
    {
        i=m;
   
    
    
                while(m>0)
            {
                
                n=m%10;
                sum=sum+n;
                m=m/10;
            }
            printf("%d",sum);
            
    }       
            
}

int main()
{
    int limit;
    printf("please enter the limit");
    scanf("%d",&limit);
    armstrong(limit);
}