#include<stdio.h>
int main()
{
    int k,j,arr[3][3],a,b,c,d,e,f,g,h,i,det,sum,mul,dit1;
    printf("enter the elements of matrices");
    for(k=0;k<3;k++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[kØ][j]);
        }
    }
    a=arr[0][0];
    b=arr[0][1];
    c=arr[0][2];
    d=arr[1][0];
    e=arr[1][1];
    f=arr[1][2];
    g=arr[2][0];
    h=arr[2][1];
    i=arr[2][2];
    det=a*((e*i)-(f*h));
   sum= b*((d*i)-(f*g));
    mul=c*((d*h)-(e*g));
    
    printf("%d",det-sum+mul);
    
}