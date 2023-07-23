#include <stdio.h>
int main()
{
    int amount, count = 0;
    printf("enter a amount ");
    scanf("%d", &amount);
    if (amount > 500)
    {
        // amount = amount - 500;
        // count= count +1;
        count = amount / 500;

        amount = amount - 500 * count;
        printf("total of 500 notes are %d", count);
    }
    if (amount >= 200)
    {
        count = 0;
        count = amount / 200;
        amount = amount - 200 * count;
        printf("total of 200 notes are %d", count);
    } 
   
    
    
}