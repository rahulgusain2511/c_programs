#include<stdio.h>
int main()
{
    int n,i,j,k,a,b,c,m=5,r,l,p,g;
    
    
    
       for(i=1;i<=3;i++)
       { 
           m=m+4;
           p=8;
        for(j=1;j<=m;j=j+2)
        {
            for(n=p;n>=1;n--)
            {
                printf(" ");
            }
             for(k=1;k<=j;k++)
             {
                 printf("^");
                
             }
             printf("\n");
             p--;

        }
       }
       for(l=1;l<=5;l++)
       {
           for(g=1;g<=7;g++)
           {
               printf(" ");
           }
           for(r=1;r<=3;r++)
           {
               printf("|");
           }
           printf("\n");
       }

    
}