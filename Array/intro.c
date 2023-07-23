// Array 
// homegenous collection of similar data elements or value or type
// 1-d array 
// 2-d array matrix
// a[] = {1,2,3,4,5,6,7,8}
// a[][] = {1 2 3
        // 4 5 6
        // 7 8 9 }

#include<stdio.h>

int main() {
    int i;
    //printf("%d",&i);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for (size_t i = 0; i <= 9; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}