#include<stdio.h>
int main()
{
    int bs;
    float total;
    printf("enter your salary");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        total=bs+((20*bs)/100)+((80*bs)/100);
        printf("total salary is = %f",total);
    }    
        if(bs<=20000)
    {    
        total=bs+((25*bs)/100)+((90*bs)/100);
        printf("total salary is = %f",total);
    }   
   
        else
    {    
        total=bs+((30*bs)/100)+((95*bs)/100);
        printf("total salary is = %f",total);
    }       
        
}        
        

    


