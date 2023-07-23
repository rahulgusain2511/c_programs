#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],c=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr1[i][j]==0)
            {
                c++;
            }
        }
    }
    
    if(c>=5)

    {
        printf("sparce matrices");
    }
    else
    {
        printf("not a sparce matrices");
    }
    
}