#include<stdio.h>
int main()
{
    int maths,eng,comp,hindi,physics,total;
    float avg,per;
    printf("enter marks of maths \t= \t");
    scanf("%d",&maths);
    printf("enter marks of eng \t=\t");
    scanf("%d",&eng);
    printf("enter marks of comp \t=\t");
    scanf("%d",&comp);
    printf("enter marks of hindi \t=\t");
    scanf("%d",&hindi);
    printf("enter marks of physics \t=\t");
    scanf("%d",&physics);
    total=maths+eng+comp+hindi+physics;
    printf("total marks = %d",total);
    avg=(total)/5;
    printf("the average is = %f",avg);
    per=(total*100)/500;
    printf(" percentage is =%.2f",per);
}

