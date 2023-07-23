#include<stdio.h>
struct student
{
    char name[20];
    char branch[10];
    int yr;
    char rollno[5]; 
};

int main()
{
    struct student stu[3];
    int i;
    for(i=0;i<3;i++)
    {
    scanf("%s",stu[i].name);
    scanf("%s",stu[i].branch);
    scanf("%d",&stu[i].yr);
    scanf("%s",stu[i].rollno);

    }
    printf("NAME\tBRANCH\tYEAR\tROLL NO.\n");

    for(i=0;i<3;i++)
    {
    printf("%s\t",stu[i].name);
    printf("%s\t",stu[i].branch);
    printf("%d\t",stu[i].yr);
    printf("%s",stu[i].rollno);
    printf("\n");

    }

  

}
