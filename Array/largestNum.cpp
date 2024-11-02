#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={12,23,34,45,32,21,-2,-21,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
   cout<<largest;
}