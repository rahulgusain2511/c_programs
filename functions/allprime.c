#include<stdio.h>
void prime(int a)
{
    int i,j,c=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf(" %d is a prime number \n",i);
        }
        c=0;
    }
}
int main()
{
    int limit;
    printf("enter a limit");
    scanf("%d",&limit);
    prime(limit);
}