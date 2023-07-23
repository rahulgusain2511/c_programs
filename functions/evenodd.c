#include<stdio.h>
void evenodd(int a)
{
    a%2==0?printf("even"):printf("odd");

}
int  main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    evenodd(num);
}
