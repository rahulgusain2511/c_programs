#include<stdio.h>
void dia(int a)
{
    float dia,cir,area;
    dia=(float)a*2;
    cir=2*3.14*a;
    area=3.14*a*a;
    printf("the diameter of circle is = %.1f\n",dia);
    printf("the circumference of circle is = %f\n",cir);
    printf("the area of circle is = %f \n ",area);
}
int main()
{
    int radius;
    printf("enter radius of the circle ");
    scanf("%d",&radius);
    dia(radius);

    
}