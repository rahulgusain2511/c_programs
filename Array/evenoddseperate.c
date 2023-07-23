#include<stdio.h>
int main()
{
    int i,j,k,c=0,d=0;
    int arr[5]={1,2,3,4,5};
    int ar1[5],ar2[5];
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            ar1[c]=arr[i];
            c++;
            
        }
        else
        {
            ar2[d]=arr[i];
            d++;
        }
        
    }
    for(j=0;j<c;j++)
    {
        printf("%d",ar1[j]);

        
    }
    for(k=0;k<d;k++)
    {
        printf("%d",ar2[k]);
    }



}