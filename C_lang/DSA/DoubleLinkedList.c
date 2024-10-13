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

int main(){
struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* sec=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));

head->prev=NULL;
head->data=10;
head->next=sec;

sec->prev=head;
sec->data=20;
sec->next=third;

third->prev=sec;
third->data=30;
third->next=NULL;



display(head);

    return 0;
}