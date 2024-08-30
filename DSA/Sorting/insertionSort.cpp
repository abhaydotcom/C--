#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else break;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={65,43,21,13,45,65,76,87,98};
    int s=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,s);
    cout<<"The Sorted Array is ";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}