
#include<iostream>
using namespace std;

 int main(){
    int n=1232;
    int ans=0;
    int digit;
    while(n!=0){
        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    } 
    cout<<ans;
   

 }