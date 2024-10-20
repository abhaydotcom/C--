#include<iostream>
using namespace std;

class Cqueue{
    int *arr;
    int size,front,rear;
    public:
    Cqueue(){
        size=100;
        arr=new int [size];
        front=rear=-1;
    }

  void enqueue(int value) {
        if ((rear + 1) % size == front) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        cout << "Inserted " << value << endl;
    }
    int dequeue(){
        if(front==-1){
            cout<<"Queue is empty";
        }
        int ans=arr[front];
            arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }else{
            front++;
        }
        return ans;
    }

     void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return ;
        }else{
        cout << "Queue front element is: "<<arr[front];

        return ;}
    }
};

int main(){
    Cqueue a;
    a.enqueue(10);
    a.enqueue(20);
    a.enqueue(30);
    a.enqueue(40);
    a.dequeue();
    a.dequeue();
    a.display();
}