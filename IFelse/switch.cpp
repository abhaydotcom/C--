#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"first Number\n ";
    cin>>a;
    cout<<"Second Number\n ";
    cin>>b;
    cout<<"give us operation ";
    cin>>ch;

    switch(ch){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"invalid"<<endl;
    }
   

}