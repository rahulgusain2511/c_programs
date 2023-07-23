#include<stdio.h>
int main()
{
    int i,j,num,arr1[2][2];
    printf("eneter elements of an array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the number with which you want to multiply");
    scanf("%d",&num);
    // printf("%d",num);
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr1[i][j]= arr1[i][j] * num;
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //         printf("%d",arr1[i][j]);
    //         // printf("");
    //     }
    //     printf("\n");
    // }
}
