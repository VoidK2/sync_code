#include<cstdio>
#include<iostream>
#include <stdio.h>
int getSize(int data[]){
    return sizeof(data);
}
 
int main(){
    int data1[] = {1,2,3,4,5};
    int size1 = sizeof(data1);
     
    int* data2 = data1;
    int size2 = sizeof(data2);
     
    int size3 = getSize(data1);
     
    printf("%d, %d, %d", size1, size2, size3);
    return 0;
}