#include<stdio.h>
int main()
{
    float t;
    printf("enter temperature in celcius \n");
    scanf("%f",&t);
    printf("temperature in feranhiet = %.1f",t*(9/5) + 32 );
    printf("temperature in kelin is = %f",t+273);

}