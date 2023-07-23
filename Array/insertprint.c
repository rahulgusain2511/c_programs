#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    printf("Enter the elements");
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
