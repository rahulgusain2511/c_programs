#include<stdio.h>
#include<stdlib.h>
struct person
{
    char name[20];
};

int main()
{ 
    int i;
    struct person *p;

    p = (struct person *) malloc(2* sizeof(struct person));
   for(i=0;i<2;i++)
   {
       scanf("%s",(p+i)->name);
   }
    for(i=0;i<2;i++)
   {
       printf("%s",(p+i)->name);
   }
}
