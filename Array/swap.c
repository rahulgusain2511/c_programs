#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("%d%d\n",num1,num2);

    

    
}