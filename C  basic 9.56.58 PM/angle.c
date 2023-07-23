#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter two angle of triangle");
    scanf("%f%f",&a,&b);
    printf("the third angle is = %.2f",180-(a+b));
}

