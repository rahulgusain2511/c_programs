#include<stdio.h>
#define size 5

void rotationbyone(int arr[]) {
    int i, start;
    start = arr[0];
    for (i = 0; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = start;
}

int main(int argc, char const *argv[])
{
    int i,arr[size],rot;
    printf("Enter the elements of the arrray");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the rotation number below 5");
    scanf("%d",&rot);

    for (i = 1; i <= rot; i++)
    {
        rotationbyone(arr);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}
