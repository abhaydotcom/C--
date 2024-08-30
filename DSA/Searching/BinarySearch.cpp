#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }else e=mid-1;
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={37,47,82,83 ,86 ,91 ,98, 121, 126, 145, 161, 165 ,200 ,202 ,208 ,230 ,235, 241, 288, 334, 336, 358, 364 ,453 ,462 ,473 ,484 ,484 ,491 ,494 ,526 ,546 ,550 ,555 ,588 ,595, 612 ,615 ,637 ,745 ,758 ,775 ,780 ,789, 811, 812, 822, 828, 830, 840 ,847, 859 ,859 ,863 ,865, 890 ,925 ,980};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=98;
    int res=binary(arr,size,key);
    if(res!=-1){
        cout<<"The Element is found at the index of: "<<res;
    }else cout<<"Not found";
}