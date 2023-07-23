#include<stdio.h>
void cube(int);
int main()
{
    int a;
    printf("enter a number to find its cube ");
    scanf("%d",&a);
    cube(a);
}
void cube(int x)
{
    printf("cube of the number is = %d",x*x*x);
}