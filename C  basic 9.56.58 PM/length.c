#include<stdio.h>
int main(int argc, char const *argv[])
{
    float len;
    printf("enter the value of length");
    scanf("%f",&len);
    printf("length in meters is = %f length in kilometer is =%f ",len/100,len/100000);
    return 0;
}
