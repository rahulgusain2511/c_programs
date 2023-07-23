#include<stdio.h>
void add(int x, int y) {
    printf("The sum is =\t%d",x+y);
}
int main(int argc, char const *argv[])
{
    int a=9,b=8;
    // function calling with parameter
    add(a,b);
    sub();
    return 0;
}
void sub() {
    printf("hi");
}
