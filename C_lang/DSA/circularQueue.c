#include<stdio.h>
#include<stdlib.h>

struct Cirqueue{
    int size,f,r;
    int *arr;
}q;

int isFull(struct Cirqueue* q){
    if(q->r+1%q->size==q->f)return 1;
    return 0;
}

int isempty(struct Cirqueue* q){
    if(q->f==q->r)return 1;
    return 0;
}

void push(struct Cirqueue* q,int val){
    if(isFull(q))printf("Queue is FuLL\n");
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("%d :enqueued\n",val);
    }
}

int pop(struct Cirqueue* q){
    int a=-1;
    if(isempty(q))printf("Queue is underflow\n");
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}

void display(struct Cirqueue* q){
    if(isempty(q))printf("Queue is Empty");
    else{
        printf("All the Elemmet in the queue\n");
        for(int i=q->f;i<q->r;i++){
            printf("%d ",q->arr[i]);
        }
    }
}



int main(){

q.size=6;
q.f=-1;
q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));

push(&q,10);
push(&q,20);
push(&q,30);
push(&q,40);
push(&q,50);
push(&q,60);
push(&q,70);
push(&q,80);
pop(&q);
pop(&q);
pop(&q);
pop(&q);

display(&q);
    return 0;
}