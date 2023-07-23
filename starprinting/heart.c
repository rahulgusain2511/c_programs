#include<stdio.h>
int main()
{
    int i,j,m,n=1,c,d,e;
    for(i=1;i<=3;i++)
    {
        
        for(j=1;j<=19;j++)
        {
            if(i==1&&j==1||i==1&&j==2||i==1&&j==8||i==1&&j==9||i==1&&j==10||i==1&&j==11||i==1&&j==12||i==1&&i==18||i==1&&j==19||i==2&&j==1||i==2&&j==9||i==2&&j==10||i==2&&j==11||i==2&&j==19||i==3&&j==10||i==1&&j==18)
            {
            printf(" ");
            printf(" ");
            }
            else
            {
                printf("*");
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(c=19;c>=1;c=c-2)
    {
        for(d=1;d<n;d++)
        {
            printf(" ");
        }
        for(e=1;e<=c;e++)
        {
            if (c==19&&e==8)
            {
                printf("S");
            }
            else if(c==19&&e==9)
            {
                printf("h");
            }
                else if(c==19&&e==10)
                {
                    printf("r");
                }
                else if(c==19&&e==11)
                {
                    printf("e");
                }
                else if(c==19&&e==12)
                {
                    printf("y");
                }
            
             else 
             { 
                    printf("*");
             }
            printf(" ");
        }
        printf("\n");
        n=n+2;
 
    }

 return 0;

}