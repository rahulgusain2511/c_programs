#include<stdio.h>

void printMoreNumber(int i, int lim) {
    if(i == lim) {
        return;
    } else {
        printf("%d",i);
        printMoreNumber(i+1,lim);
    }
}


int main(int argc, char const *argv[])
{
    int startNumber = 0;
    int LimitNumber = 10;

    printMoreNumber(startNumber,LimitNumber);
    return 0;
}
