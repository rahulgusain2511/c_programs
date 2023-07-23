//  Recursion
//  when we are calling the same function again and again
//  when a function calls itself it is called recursion

#include <stdio.h>

void add(int x)
{
    while (x > 0)
    {
        printf("%d\n",x);
        return add(x-1);
    }
}

int main()
{
    add(5);
    return 0;
}