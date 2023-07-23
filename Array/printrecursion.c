#include<stdio.h>
void print(int a[], int i)
{ 

    if (i<5)
    {
        printf("%d",a[i]);
        print(a,i+1);
    }
}
void scan(int a[],int i)
{
    if(i<5)
    {
        scanf("%d",&a[i]);
        scan(a,i+1);
    }
}
int main()
{ 

    int i=0;
    int arr[10];
    scan(arr,i);
    print(arr,i);
}
