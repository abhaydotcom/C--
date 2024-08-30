#include<iostream>
using namespace std;

int strLen(string s){
        int length =0;
        while(s[length]!='\0'){
            length++;
        }
        return length;
}

int main(){
string str="Abhay kumar singh";
int length=strLen(str);
for(int i=0;i<length;i++){
    if(str[i]>='a'&&    str[i]<='z'){
        str[i]=str[i]-32;
    }
}
for(int i=0;i<length;i++){
    cout<<str[i];
}
}