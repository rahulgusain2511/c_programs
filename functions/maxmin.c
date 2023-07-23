#include<stdio.h>
void maxmin(int a,int b)
    {
        a>b?printf("%d number is greater",a):printf("%d number is greater",b);
        
    }
int main()
{
    int num1,num2;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    maxmin(num1,num2);
}