#include<iostream>
using namespace std;

// class avay{
//     public:
//     int n;
//     avay* next;
//     avay(int n){
//         this->n=n;
//         this->next=NULL;
//     }
// }
// ;
// void insertHead(avay* &head,int s){
//     avay* temp= new avay(s);
//     temp->next=head;
//     head=temp;
// }

// void insertTail(avay* &tail,int s){
//     avay* temp= new avay(s);
//     temp->next=tail;
//     tail=temp;
// }



// void print(avay* &head){
//     avay* temp=head;
//     while(NULL !=temp){
//         cout<<temp->n<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

class a{
    public:
    int n;
    a* next;
    a(int q){
        n=q;
        next=NULL;
    }
};
void insert(a* &h,int w){
    a* t=new a(w);
    t->next=h;
    h=t;
}

void print(a* &h){
    a* t=h;
    while(NULL!=t){
        cout<<t->n<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main (){
   a* s= new a(10);
    a* h=s;
    insert(h,11);
    print(h);
   

}