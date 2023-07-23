#include<stdio.h>

int table(int lim, int n) {
    if (lim<=10)
    {
        printf("%d * %d = %d\n",n,lim,lim*n);
        table(lim+1,n);   
    }
}
int main() {
    int num,c=1;
    printf("Enter the digit\n");
    scanf("%d",&num);
    table(c,num);
    return 0;
}