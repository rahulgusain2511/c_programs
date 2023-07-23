#include<stdio.h>
int main ()
{
    float bill;
    int unit;
    printf("enter unit = \t ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=0.50*unit;
        printf("total bill is = %f",bill);
        
    }
    else if(unit<=150&&unit>50)
    {
        bill=50*0.50+0.75*(unit-50);
        printf("total bill is = %f",bill);
     
    
        
    }
    else if(unit<250)
    {
        bill=50*0.50+0.75*100+1.20*(unit-150);
        printf("total bill is = %f",bill);
        
    }
    else 
    {
        bill=50*0.50+0.75*100+100*1.20+(unit-250)*1.50;
        printf("total bill is = %f",bill);
        

    }
 
    
}