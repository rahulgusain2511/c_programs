#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,num,k,last,l;
    int arr1[20];
    int arr2[20];
    printf("enter a number");
    scanf("%d",&num);
    while(num != 0)
    {
        last=num%10;
        num=num/10;
        if(last%2==0)
        {
             arr1[i]=last;
             i++;
        }
              
        else if(last%2 != 0)
        {
            arr2[j]=last;
            j++;
        }

    }

    for(k=0;k<strlen[arr1];k++)
    {

    printf("%d",arr1[k]);
    }
    for(l=0;l<strlen[arr2];k++)
    {

    printf("%d",arr2[l]);
    }


}