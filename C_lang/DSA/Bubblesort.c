#include<stdio.h>

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}


int main(){
int arr[]={65,4,55,33,42,12,34,21,67,56,41};
int size=sizeof(arr)/sizeof(arr[0]);
bubble(arr,size);
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}

    return 0;
}