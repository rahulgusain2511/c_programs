#include<stdio.h>
struct table
{
    int t;

}f1,f2;
int main()
{ 
    int i;
    printf("enter the number whose table you want to see");
    scanf("%d",&f1.t);
    for(i=1;i<10;i++)
    {
        f2.t=f1.t*i;
        printf("%d * %d = %d",f1.t,i,f2.t);
        printf("\n");
    }

}