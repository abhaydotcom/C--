#include<iostream>
using namespace std;
class queue{
    int *arr;
    int size,front,rear;
    public:
    queue(){
        size=1000;
        arr=new int[size];
        front =0;rear=0;

    }

        bool isEmpty(){
            if(front==rear){
                return true;
            }else return false;
        }
    void inqueue(int n){
         if(rear==size){
            cout<<"Queue is full";
         }else{
            arr[rear]=n;
            rear++;
         }
    }
    int dequeue(){
        if(front==rear){
            return -1;

        }else{
            arr[front]=-1;
            front++;
            front =0;
            rear=0; 
        }
    }
    int display(){
        if(front==rear){return -1;}
        else{
            return arr[front];
        }
    }

};
int main(){

    queue a;
    a.inqueue(10);
    a.inqueue(20);
    a.inqueue(20);
    a.inqueue(20);
    a.dequeue();
    cout<<a.display();
}
