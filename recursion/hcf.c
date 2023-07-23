#include<stdio.h>
void hcf(int a,int b,int p)
{
    static int d=0;
    int c;
    c=a>b?a:b;
    if(p<=c)
    {
        if (a%p==0&&b%p==0)
        {
            d=p;
        }
            hcf(a,b,p+1);          
    }
     else
     {
         
             printf("%d\n",d);
        
     }
     
      
    
}
int main()
{
    int num1,num2,i=1;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    hcf(num1,num2,i);
}