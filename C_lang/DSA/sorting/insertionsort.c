#include<stdio.h>
void insertion(int arr[],int n){
}


int main(){

int arr[]={65,4,55,33,42,12,34,21,67,56,41};
int size=sizeof(arr)/sizeof(arr[0]);
insertion(arr,size);
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}


    return 0;
}