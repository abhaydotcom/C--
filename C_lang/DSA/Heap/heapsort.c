#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void heapify(int arr[],int n,int i){
    int largest =i;
    int left=2*i+1; 
    int right=2*i+2;
    if(left<n && arr[largest]<arr[left])largest=left;
    if(right<n && arr[largest]<arr[right])largest=right;

    if(largest!=i){
        swap(&arr[largest],&arr[i]); 
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

void display(int arr[],int n){

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
int arr[]={54,32,45,67,65,43,25};
int n=sizeof(arr)/sizeof(arr[0]);

heapsort(arr,n);
display(arr,n);
    return 0;
}