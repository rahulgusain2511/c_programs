#include<stdio.h>
int main()
{
    int i,j,arr1[2][2],arr2[2][2],c=0;
    printf("enter the elements of array one");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements of second matrices");
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                c++;
            }
        }
    }
    if(c>=1)
    {
        printf("entered matrices are not equal");
    }
    else
    {
        printf("equal matrices");
    }
    
}