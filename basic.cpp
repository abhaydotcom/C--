#include<iostream>  
using namespace std;

bool isprime(int num){

    if(num<=1)return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)return false;
    }
    return true;
}

int main(){
int num=120;
int sum=0;

for(int i=2;i<=num;i++){
    if(isprime(i))sum+=i;
}

cout<<"The sum of Prime number of "<<num<< " is : "<<sum; 



}


