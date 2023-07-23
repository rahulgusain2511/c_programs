// function
// It is  block of statements
// having the property of reusability
// easy to use
// less code
#include<stdio.h>
int a,b;
display() {
    a=10;
    b=20;
    printf("The sum is = \t%d",a+b);
}
subtraction() {
    a=10;
    b=20;
    printf("The sub us =\t%d",a-b);
}
int main(int argc, char const *argv[])
{
    display();
    subtraction();
    return 0;
}
