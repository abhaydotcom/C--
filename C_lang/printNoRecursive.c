#include<stdio.h>

void print(int a,int n){
    if(a>n)
    return ;
    else{
        printf(" %d",a);
        print(a+1,n);
    }

}

int main(){
    int n=10;
    print(1,n);
  
    return 0;
}