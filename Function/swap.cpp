#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;

    a=b+a;
    b=a-b;
    a=a-b;

    cout<<"Swap of a "<<a<<"\n";
    cout<<"Swap of b "<<b;



}