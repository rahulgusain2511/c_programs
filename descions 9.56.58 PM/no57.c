#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a%5==0 || a%7==0)
    
        printf("number is divisible by 5 or 7");
    
    else 
    
    printf("number is not divisible by 5 0r 7");
    return 0;

}