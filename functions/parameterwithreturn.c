#include<stdio.h>
int num(int x, int y) {
    return x*y;
}

int main() {
    int mul;
    mul = num(5,6);
    printf("%d",mul);
    return 0;
}