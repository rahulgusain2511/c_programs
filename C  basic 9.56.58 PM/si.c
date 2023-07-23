#include<stdio.h>
int main ()
{
    float p,r,t,si;
    printf("enter principle,rate,time");
    scanf("%f%f%f",&p,&r,&t);
    printf("simple interest is = %f",(p*r*t)/100);
}
