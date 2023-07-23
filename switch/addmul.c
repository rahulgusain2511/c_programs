#include<stdio.h>
int main()
{
int choice,num1,num2;
printf("enter 2 number");
scanf("%d%d",&num1,&num2);
printf("1:multiply \n 2:divide \n 3:add \n 4:substraction \n enter your choice");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("your answer is=%d",num1*num2);
    break;
case 2:
printf("your answer is=%d",num1/num2);
break;
case 3:
printf("your answer is =%d",num1+num2);
break;
case 4:
printf("your answer is =%d",num1-num2);
break;

default:
printf("invailed choice");

    break;
}

}