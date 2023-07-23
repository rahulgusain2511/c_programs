#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,limit,b;
    float a;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    a = (float)limit/2;
    b = ceil(a);

    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
                if(i==b&&j==b)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    return 0;
}