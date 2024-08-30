#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number ";
cin>>n;

int a=0,b=1;
cout<<a<<" "<<b<<" ";
for(int i=0;i<n;i++){
    int fib=a+b;
    cout<<fib<<" ";
    a=b;
    b=fib;
}

}