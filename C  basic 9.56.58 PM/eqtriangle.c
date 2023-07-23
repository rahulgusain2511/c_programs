#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,t,mul;
    printf("enter the three sides of triangle");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("The sum is= %f",s);
    mul = s*(s-a)*(s-b)*(s-c);
    t=sqrt(mul);
    printf("the area of triangle is = %f",t);

}