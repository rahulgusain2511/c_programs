#include<stdio.h>
int main()
{
    int i=20,j=30;
    int *ptr1=&i,*ptr2=&j;
    int ptr3;
    ptr3=(*ptr1)+(*ptr2);
    
     *ptr1=(ptr3)-(*ptr1);
     *ptr2=(ptr3)-(*ptr2);
     printf("%d\n",*ptr1);
     printf("%d",*ptr2);

}