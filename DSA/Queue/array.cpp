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
            cout<<"Queue is empty";

        }else{int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;rear=0;

            }
            return ans;
        }
    }
    int display(){
        if(front==rear){return-1;}
        else{
            return arr[front];
        }
    }

};
int main(){

    queue a;
    a.inqueue(10);
    a.inqueue(20);
    a.inqueue(30);

    cout<<a.display();
    
}
