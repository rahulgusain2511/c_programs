#include<stdio.h>
void fibo(int a, int b, int limit)
{
    int z;
    if (limit>0)
    {
        z= a+b;
        a=b;
        b=z;
        printf("%d\n",z);
        fibo(a,b,limit-1);
    }
    
    
}

int main() {
    int a=0,b=1,limit;
    printf("Enter the limit");
    scanf("%d",&limit);
    fibo(a,b,limit);
}