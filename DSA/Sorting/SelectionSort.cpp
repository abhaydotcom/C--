#include<iostream>
using namespace std;
void Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx])
            minIdx=j;
        }
        swap(arr[minIdx],arr[i]);
    }
}
int main(){
    int arr[]={97,87,65,43,67,89,67,83};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sort(arr,n);
    cout<<"The Sorted array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}