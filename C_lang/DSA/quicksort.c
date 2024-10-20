#include<stdio.h>

void quicksort(int arr[],int low,int high){
    if(low<=high){
        int pivotidx=partion(arr,low,high);
        quicksort(arr,low,pivotidx-1);
        quicksort(arr,pivotidx+1,high);
    }
}

int partion(int arr[],int low,int high){
    int pivot=arr[high];
    int j=low-1;

    for(int i=low;i<high;i++){
        if(arr[i]<=pivot){
            j++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[j+1];
    arr[j+1]=arr[high];
    arr[high]=temp;
    return j+1;
}

int main(){
int arr[]={23,34,45,32,12,5,1,2,3,3,32,65,63,56,78,1};
int size=sizeof(arr)/sizeof(arr[0]);

quicksort(arr,0,size-1);

for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}

    return 0;
}