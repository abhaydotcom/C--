
#include<iostream>
using namespace std;

bool ispalindrome(int x){
    int temp=x;
    int ans=0,digit;
    while(x>0){
        digit=x%10;
        ans=ans*10+digit;
        x=x/10;
    }
    return (temp==x);
}
bool function(int arr[],int n){
        for(int i=0;i<n;i++){
            if(ispalindrome(arr[i])){
                return true;
            }else return false;
        }
}

int main(){
    int arr[]={121,232,343,454,565,666};
    int size =sizeof(arr)/sizeof(arr[0]);
     
    if(function(arr,size)){
        cout<<"true";
    }else cout<<false;
    
}