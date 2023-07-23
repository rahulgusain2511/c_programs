#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,power,total;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the Power\n");
    scanf("%d",&power);
    total = pow(num,power);
    printf("The total is \t=\t%d\t",total);
    return 0;
}
