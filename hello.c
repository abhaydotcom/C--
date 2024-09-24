
#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

int *a=123,*b=321;

swap(&a,&b);
printf("After swapping :%d %d",a,b);

    return 0;
}