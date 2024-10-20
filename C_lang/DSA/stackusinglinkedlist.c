#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

int isfull(struct node* top){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)return 1;
    return 0;
}

int isempty(struct node* top){
    if(top==NULL)return 1;
    return 0;
}
struct node*  push(struct node* top,int val){
    if(isfull(top))printf("Stack is fuLL\n");
    else{
        struct node* x=(struct node*)malloc(sizeof(struct node));
        x->data=val;
        x->next=top;
        top=x;
        return top;
    }
}

int  pop(struct node** top){
    if(isempty((*top)))printf("Stack is underflow\n");
else{
    struct node* ptr=(*top);
    (*top)=(*top)->next;
    
    free(ptr);

}
}
void display(struct node* top){

        while(top!=NULL){
            printf("%d ",top->data);
            top=top->next;
        }
    
}

int main(){
 struct node* top=NULL;

top=push(top,10);
top=push(top,20);
top=push(top,30);
top=push(top,40);
top=push(top,50);
top=push(top,60);
top=push(top,70);
top=push(top,80);
pop(&top);
pop(&top);
pop(&top);
pop(&top);

display(top);
    return 0;
}