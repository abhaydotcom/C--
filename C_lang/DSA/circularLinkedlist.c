#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void circular(struct node* head){
    struct node* temp=head;
    do
    {
         printf("%d ",temp->data);
        temp=temp->next;
    } while (temp!=head);
    
}

struct node* insertAtfirst(struct node* head,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

struct node* insertAtend(struct node* head,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return ptr;
}
struct node* insertAtidx(struct node* head,int idx,int val){
    struct node* ptr=(struct node* )malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=idx-1){
        p=p->next;
        i++;
    }
    ptr->data=val;
    ptr->next=p->next;
    p->next=ptr;
    return ptr;
} 

int main(){

struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* sec=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=sec;
sec->data=20;
sec->next=third;
third->data=30;
third->next=head;
head=insertAtfirst(head,90);
head=insertAtfirst(head,100);
insertAtend(head,40);
insertAtend(head,50); 
insertAtidx(head,4,400);

circular(head);

    return 0;
}       