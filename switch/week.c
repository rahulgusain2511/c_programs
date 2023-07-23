#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter the number between 1-7 to get the day");
    scanf("%d", &choice);
    //1
    switch (choice)
    {
    case 1:
        printf("It is Monday\n");
        break;
    case 2:
        printf("It is Tuesday\n");
        break;
    case 3:
        printf("It is Wednesday\n");
        break;
    case 4:
        printf("It is thrusday\n");
        break;
    case 5:
        printf("It is friday\n");
        break;
    case 6:
        printf("It is Saturday\n");
        break;
    case 7 :
         printf("It is Sunday\n");
         break;
    default :
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
