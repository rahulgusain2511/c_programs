#include<stdio.h>

int getter() {
    return 10*20;
}

int main(int argc, char const *argv[])
{
    int n;
    n = getter();
    printf("%d",n);
    return 0;
}
