#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;  
};
struct node* create(int val){
  struct  node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=val;
  newnode->next=NULL;
  return newnode;
}



void display(struct node* ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node* insertAtHead(struct node*  head,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=val;
    return ptr;
}
struct node* insertAtEnd(struct node* next,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=next;
    ptr->data=val;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return p;
    
}

struct node* insertAtindex(struct node* head,int idx,int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    int i=0;
    while(i!=idx-1){
        head=head->next;
        i++;
    }
    ptr->data=val;
    ptr->next=head->next;
    head->next=ptr;
    return head;
    
}

struct node* deleteAtFront(struct node* head){
    struct node* p=head;
    head=head->next;
    free(p);
    return head;

}

struct node* deleteAtidx(struct node* head,int idx){
    struct node* p=head;
    struct node* ptr=p->next;
    for(int i=0;i<idx-1;i++){
        p=p->next;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
    return p;
}
struct node* deleteAtend(struct node* head){
    struct node* p=head->next;
    while(p->next!=NULL){
        p=p->next;
        head=head->next;
    }
    
    free(p);
    head->next=NULL;
    return head;
}



int main(){
struct node* head;
struct node* sec;
struct node* third;
struct node* fourth;
struct node* fifth;
head=(struct node*)malloc(sizeof(struct node));
sec=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=sec;

sec->data=20;
sec->next=third;

third->data=30;
third->next=fourth;

fourth->data=40;
fourth->next=fifth;

fifth->data=50;
fifth->next=NULL;

  


insertAtEnd(head,102);
insertAtEnd(head,103);
head=deleteAtFront(head);
head=deleteAtFront(head);
head=deleteAtFront(head);
head= insertAtHead(head,120);
insertAtindex(head,2,2000);
head=deleteAtFront(head);

display(head);  


    return 0;
}
