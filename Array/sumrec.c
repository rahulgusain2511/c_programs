#include<stdio.h>
int main()
{
    // matrices array eadhar arr[]
    // matrices 
    int a[2][2],limit,i,j;
    printf("Enter the limit to store the element");
    scanf("%d",&limit);

    //  scan the martrix
    printf("Now, Please enter the elements");
    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < limit; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered elements are\n");
    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < limit; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}