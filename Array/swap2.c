#include<stdio.h>
int main()
{
    int num1=10,num2=20,a;
    a=num1;
    num1=num2;
    num2=a;
    printf("%d%d",num1,num2);

}