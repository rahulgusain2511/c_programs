#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],b[10],c=0;
    printf("Enter the 5 elemets");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        c=1;
        if (a[i] != -1)
        {
            for (int  j = i+1; j < 5; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    a[j] = -1;
                }   
            } 
        }
        b[i] = c;
        
    }

    // ? printing the frequency of a number

    printf("The frequency are: \n\n");
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n",a[i]);
        if (a[i] != -1)
        {
            printf("No of %d is = %d\n", a[i],b[i]);
        }
        
    }
    
    
    
    return 0;
}
