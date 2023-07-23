#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
switch(num % 2)

{
    case 0:
    printf("even number");
    break;


    case 1:
    printf("odd number");
    break;
}
}