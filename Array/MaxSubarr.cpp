#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int maxSum=INT_MIN;
    
    for(int i=0;i<5;i++){
        int sub=0;
        for(int j=i;j<5;j++){
            sub += arr[j];
            if(sub<0){
                sub=0;
               
            }

             maxSum=max(sub,maxSum);
        }
       
    }

     cout<<"Maximum Sub Array Sum: "<<maxSum;
}