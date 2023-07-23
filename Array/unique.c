#include<stdio.h>
int main()
{
    int i,j,c;
    int arr[5],freq[5];
    printf("Enter the elements");
    for(i=0;i<5;i++) {
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    for(i=0;i<6;i++)
    { 
         c=1;
        for(j=i+1;j<6;j++)
        { 
            if(arr[i]==arr[j])
            {
             c++;
             freq[j] = 0;
            // printf("%d,",c);
            } 
            if (freq[i] != 0)
            {
                freq[i] = c;
            }
               
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d",freq[i]);
    }
    

}