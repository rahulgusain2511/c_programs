#include<stdio.h>
int main()
{
    int physics,chemistry,bio,maths,comp;
    float per;
    printf("enter marks of physics =\t");
    scanf("%d",&physics);
    printf("enter marks of chemistry =\t");
    scanf("%d",&chemistry);
    printf("enter marks of bio =\t");
    scanf("%d",&bio);
    printf("enter marks of maths =\t");
    scanf("%d",&maths);
    printf("enter marks of comp =\t");
    scanf("%d",&comp);
per=((physics+chemistry+bio+maths+comp)*100)/500;
if(per>=90)
{
    printf("grade A");
}
else if(per>=80)
{
    printf("grade B");
}
else if(per>=70)
{
    printf("grade C");
    
}
else if(per>=60)
{
    printf("grade d");

}
else if(per>=40)
{
    printf("grade e");
} 
else
{
    printf("grade f");
}
}











