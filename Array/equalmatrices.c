#include<stdio.h>
int main()
{
    int i,j,c=0;
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={1,2,3,5};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                c++;
            }
        }
    }
    if(c==4)
    {
        printf("eqaul matric");
    }
    else
    {
        printf("not a equal matric");
    }
    
}