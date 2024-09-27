
#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size,r,f;
    int* arr;
};

int isFull(struct queue *q){
    if(q->r==q->size-1)return 1;
    return 0;
}



void enqueue(struct queue *q,int data){
    if(isFull(q)){
        printf("Queue is full\n");
    }else{
        q->r++;
        q->arr[q->r]=data;
        printf("Enqued element: %d\n", data);
    }
}


int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int dequeue(struct queue *q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is Empty\n");
    }else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

void display(struct queue *q){
    if(isempty(q)){
        printf("Queue is empty");
    }else{
        printf("Queue All Element \n");
       for(int i=q->f+1;i<q->r+1;i++){
        printf(" %d",q->arr[i]);
       }
    }
}


int main(){
 struct queue q;
 q.size=100;
 q.f=-1;
 q.r=-1;
 q.arr=(int*) malloc(q.size*(sizeof(int)));

 


 enqueue(&q,10);
 enqueue(&q,20);
 enqueue(&q,30);    
 enqueue(&q,40);    
 enqueue(&q,50);    
 enqueue(&q,60);   
 dequeue(&q); 

display(&q);

    return 0;
}