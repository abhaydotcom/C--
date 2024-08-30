#include<stdio.h>
int binarySearch(int arr[],int n,int key){
    int s=0,end=n-1,mid=s+(end-s)/2;
    while(s<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }else end=mid-1;
        mid=s+(end-s)/2;
    }
    return -1;
}
int main(){
    int arr[]={12,34,45,56,67,78,89};
    int s=sizeof(arr)/sizeof(arr[0]);
    int key=34;
    int res=binarySearch(arr,s,key);
    printf("The element is on the index of: %d",res);
    return 0;
}