#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}

int main()
{
    int c,d,t;
    printf("enter a number and its power ");
    scanf("%d%d",&c,&d);
    t= power(c,d);
    printf("%d",t);
}