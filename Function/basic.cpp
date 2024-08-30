#include<iostream>
using namespace std;
void add(int x,int y){
    cout<<x+y;
    return;
}

int mul(int a,int b){
    int multi=a*b;
    
}

void ind(){
    cout<<"HEY HELLO HOW ARE YOU";
return;
}

int main(){
    int a,b;
    cout<<"Enter First Number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;

   cout<<"Addition is: ";
    add(a,b);
    cout<<"\n";
    cout<<"Multiplication is: ";
    cout<<mul(a,b)<<endl;

ind();


}