#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int > max;
    priority_queue<int,vector<int>,greater<int>> mini;
    max.push(4);
    max.push(3);
    max.push(5);
    max.push(1);
    max.push(2);
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;

    mini.push(4);
    mini.push(2);
    mini.push(5);
    mini.push(3);
    mini.push(1);

    int z=mini.size();
    for(int i=0;i<z;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    





}