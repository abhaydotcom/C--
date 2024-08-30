#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="abhay kumar singh";
    string a1="avay";
    string a2="avay";
    cout<<"The length of string is: "<<a.length()<<endl;
    string b=a.substr(0,11);
    cout<<"The string is printed between 0 to 11 character: "<<b<<endl;
    a.append("singh");
    cout<<"Append the last name: "<<a<<endl;

    int res=a1.compare(a2);
    cout<<"Compare string 1 and 2: "<<res<<endl;
   // a.clear();

    if(a.empty()){
        cout<<"String is empty"<<"\n";

    }else cout<<"Not Empty\n";

}