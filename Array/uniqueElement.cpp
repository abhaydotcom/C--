#include<iostream>
#include<vector>
using namespace std;



int main(){
   vector<int> arr={1,2,3,4,3,1,4};
   int n=arr.size();
   int unique=0;
   for(int i=0;i<n;i++){
    unique ^= arr[i];
   }
   cout<<unique;
}