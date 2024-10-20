#include<stdio.h>
#include<stdlib.h>
struct node* f=NULL;
struct node* r=NULL;

struct node{
    int data;
    struct node* next;
};


void enqueue(int val){
    struct node* n=(struct node*)malloc(sizeof(struct node));                      
    if(n==NULL)printf("Queue is full\n");
    else{
            n->data=val;
            n->next=NULL;
            if(f==NULL){
                f=r=n;
            }else{
                r->next=n;
                r=n;
            }
            
    }
}
int dequeue(){
    int val=-1;
    struct node* n=f;
    if(f==NULL)printf("Queue is Empty\n");
    else{
        f=f->next;
        
        free(n);
      
    }
}

void display(){
    while(f!=NULL){
        printf("%d ",f->data);
        f=f->next;
    }
    
}


int main(){


enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
dequeue();
display();
    return 0;
}