#include<stdio.h>
int main()
{
    int i,limit,c=0,j;
    printf("enter a limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }    
        if(c==2)
        {
            printf("%d\n",i);

        }
        
        
        c=0;
    }
    

}