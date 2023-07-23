#include<stdio.h> 
int per(int e,int f,int g,int h)
{
    int p;
    p=((e+f+g+h)*100)/400;
    printf("percentage is  %d",p);
}
int total(int e,int f,int g,int h)
{
    int t;
    t=e+f+g+h;
    printf("total is %d",t);
}





int main()
{
    int a,b,c,d,m;
    printf("enter marks in english,physics,chemistry,maths");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("press 1 for percentage \n press 2 for total");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        {
            per(a,b,c,d);
            break;
        }
        case 2:
        {
            total(a,b,c,d);
            break;
        }

    }



}