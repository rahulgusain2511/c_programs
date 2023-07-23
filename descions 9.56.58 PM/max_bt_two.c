#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)  printf("The number 1 is greater than number 2");
        else 
        printf("The number 2 is greater than number 1");

    
    return 0;
}
