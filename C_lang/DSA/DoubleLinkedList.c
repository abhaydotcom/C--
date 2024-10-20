#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void display(struct node* head){
    struct node* p=head;

    while(p->next!=NULL){
        p=p->next;
    }
    printf("\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->prev;
    }
}
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main(){
// struct node* head=(struct node*)malloc(sizeof(struct node));
// struct node* sec=(struct node*)malloc(sizeof(struct node));
// struct node* third=(struct node*)malloc(sizeof(struct node));

// head->prev=NULL;
// head->data=10;
// head->next=sec;

// sec->prev=head;
// sec->data=20;
// sec->next=third;

// third->prev=sec;
// third->data=30;
// third->next=NULL;
struct node* head=createNode(10);

struct node* second=createNode(20);
struct node* third=createNode(30);
head->next=second;
second->prev=head;

display(head);

    return 0;
}