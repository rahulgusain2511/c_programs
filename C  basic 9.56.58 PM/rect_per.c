#include<stdio.h>
int main()
{
    /* code */
    int length,breadth;
    printf("enter the value of length and breadth");
    scanf("%d%d",&length,&breadth);
    printf("the area of rectangle is = %d the perimeter of rectangle is = %d",length*breadth,2*(length + breadth) );
    return 0;
}
