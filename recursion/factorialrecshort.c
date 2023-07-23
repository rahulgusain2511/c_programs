#include<stdio.h>
int factorial(int n) {
    if (n==0)
    {
        return 1;
    } else {
        return n*factorial(n-1);
    }
    
}

int main() {
    int num,total;
    printf("Enter the number");
    scanf("%d",&num);
    total = factorial(num);
    printf("%d",total);
    return 0;
}