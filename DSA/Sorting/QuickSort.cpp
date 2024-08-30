#include<iostream>
using namespace std;

int partion(int arr[],int l,int h){
    int pivot=arr[h];
    int c=l-1;
    for(int i=l;i<h;i++){
        if(arr[i]<=pivot){
            c++;
            swap(arr[c],arr[i]);
        }
    }
    swap(arr[c+1],arr[h]);
    return c+1;
}

void quickSort(int arr[],int l,int h){
    if(l<h){
    
        int p=partion(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

int main(){
    int arr[]={20,30,10,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}