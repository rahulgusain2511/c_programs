#include<stdio.h>
void table(int n ,int i)
{ static int p=1;
    if(i<=n)
    {
        p=n*i;
        table(n,i++);
    }
    else
    {
        printf("%d",p);
    }
    
}
int main()
{
    int i=1,num;
    printf("enter a number");
    scanf("%d",&num);
    table(num,i);

}