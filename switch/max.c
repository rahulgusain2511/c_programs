#include<stdio.h>
int main()
{
    int choice,a,b;

    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        
        a>b?printf("a is max"):printf("b is max");
        break;

    }
}