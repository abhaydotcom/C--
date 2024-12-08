#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* create(int val){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->next=NULL;
    new->prev=NULL;
}

void TraverseForward(struct node* n){
    struct node* p=n;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void TraverseBackward(struct node* n){
    struct node* p=n;
    while(p->next!=NULL){
        p=p->next;
    }
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->prev;
    }
}

int main(){

struct node* head=create(10);
struct node* second=create(20);
struct node* third=create(30);
struct node* fourth=create(40);

head->prev=NULL;
head->next=second;
second->next=third;
second->prev=head;
third->prev=second;
third->next=fourth;
fourth->prev=third;
fourth->next=NULL;

TraverseForward(head);
printf("\n");
TraverseBackward(head);

    return 0;
}