#include<stdio.h>
int main()
{
    int i,j,arr[5],arr1[5],arr2[5],p=0,h=0,l,k;
    printf("enter elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    {
        if(arr[j]%2==0)
        {
            arr1[p]=arr[j];
            p++;
        }
        else
        {
            arr2[h]=arr[j];
            h++;
        }
        
    }
    for(l=0;l<p;l++)
    {
        printf("%d",arr1[l]);

    }
    for(k=0;k<h;k++)
    {

        printf("%d",arr2[k]);
    }
}