#include<iostream>
using namespace std;

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
    int a,b;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;

    swap(&a,&b);

    cout<<"Swap of a "<<a<<"\n";
    cout<<"Smap of b "<<b;



}