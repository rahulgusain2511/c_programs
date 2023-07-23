#include<stdio.h>

union person {
    int age;
    char name[50];
};

int main() {
    union person p;
    scanf("%d",&p.age);


    printf("%d",p.age);
    return 0;
}