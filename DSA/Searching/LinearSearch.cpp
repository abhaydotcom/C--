#include<iostream>
using namespace std;

int main(){
    int size[]={1,2,3,4};
    int key=3;
    int s;
    bool found=1;
    for(int i=0;i<4;i++){ 
        if(size[i]==key){
            found=0;
            s=i;
        }
    }
    if(found==0){
        cout<<"The element is founded at the index of  "<<s;
    } else cout<<"Not found";
}
