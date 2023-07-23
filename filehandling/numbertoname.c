#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,i,num,sum=0;
    printf("enter a number");
    scanf("%d",&num);

    
    while(num>0)
    {
        i=num%10;
        sum=sum*10+i;
        num=num/10;
    }
    while(sum>0)
    { 
        j=sum%10;


    

        if(j==1)
        {
            printf("one");
        }
        if(j==2)
        {
            printf("two");
        }
        if(j==3)
        {
            printf("three");
        }
        if(j==4)
        {
            printf("four");
        }
        if(j==5)
        {
            printf("five");
        }
        if(j==6)
        {
            printf("six");
        }
        if(j==7)
        {
            printf("seven");
        }
        if(j==8)
        {
            printf("eight");
        }
        if(j==9)
        {
            printf("nine");
        }
        printf(" ");
        sum=sum/10;
    }   


    
}

