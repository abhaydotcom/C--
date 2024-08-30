#include<iostream>
using namespace std;
class stack{
    public:
    int size, *arr, top=-1;
    stack(int size){
        this->size=size;
        arr= new int [size];
    }
    
    int push(int s){
        if(size-top>1){
            top++;
            arr[top]=s;
        }else cout<<"Stack is overflow\n";  
             
    }

    void pop(){
        if(top>=0){
            top--;
        }else cout<<"stack is underflow\n";
    }

    int peek(){
       
        if(top>=0){
            return arr[top];
        }else cout<<"stack is empty\n";
            return -1;
        
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        } else return false;
    }

};

int main(){
    stack s(5);
    string str="abhay";
   for(int i=0;i<5;i++){
        char ch=str[i];
        s.push(ch);
   }

   string ans="";

   while(!s.isEmpty()){
        char ch=s.peek();
        ans.push_back(ch);
        s.pop();
   }
   cout<<ans<<endl;
    
    

  

   cout<< s.peek();
}