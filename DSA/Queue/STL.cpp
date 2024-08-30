#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    cout<<"First Element "<<q.front()<<endl;
    cout<<"Last Element "<<q.back()<<endl;
    cout<<"Queue size "<<q.size()<<endl;
    q.pop();
    cout<<"First Element after using pop "<<q.front()<<endl;
    cout<<"Queue size After poping one element "<<q.size()<<endl;
    if(q.empty()){
        cout<<"The Queue is Empty"<<endl;
    }else cout<<"Not Empty"<<endl;
    
}