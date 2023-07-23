#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    for ( i = 0; i < 3; i++)
    {
        if(i==0||i==2)
        {
            for(j=2;j>=0;j--)
            {
                printf("%d",arr1[i][j]);
            }
        }
        else
        {
            for(j=0;j<3;j++)
            {
           printf("%d",arr1[i][j]);

            }
        }
    }
}

           
                
           