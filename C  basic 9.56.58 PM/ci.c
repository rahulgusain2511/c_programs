#include<stdio.h>
#include<math.h>
int main ()
{
    float p,r,t,ci,a;
    printf("enter principle,rate,time");
    scanf("%f%f%f",&p,&r,&t);
        ci = p* (pow((1 + r / 100), t));
    printf("compound interest is = %f",ci);
}