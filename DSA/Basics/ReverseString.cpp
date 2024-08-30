#include<iostream>

using namespace std;


int main(){
    char str[20]="abcddcba";
 
    int org;
   int count=0;
   for(int i=0;str[i]!='\0';i++){
    count++;
    org=str[i];
   }
  
   int start=0,end=count-1;
   while(start<=end){
    swap(str[start],str[end]);
    start++;
    end--;
   }
   int reverse;
   for(int i=0;str[i]!='\0';i++){
    reverse=str[i];
   }
   if(org==reverse){
    cout<<"This string is palindrome";
   }else cout<<"Not palindrome";

   

    
}   