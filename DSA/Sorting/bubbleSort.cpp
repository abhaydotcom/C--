#include<iostream>
using namespace std;

void bubbleSort(int arr[],int s){
    for(int i=1;i<s;i++){
        for(int k=0;k<s-1;k++){
            if(arr[k]>arr[k+1]){
                swap(arr[k],arr[k+1]);
            }
        }
        
    }
}

int main(){
    int arr[]={76,56,54,34,78,29,87,54,32,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    cout<<"The Sorted Array is ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}