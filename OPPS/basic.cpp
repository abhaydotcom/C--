#include<iostream>
using namespace std;

class avay{
    public:
    string name;
    int* id;
    float salary;

    avay(){
        id=new int;
    }

   void as(string n,int i,float sal){
    name=n;*id=i;salary=sal;
   }
   void show(){
    cout<<name<<endl<<*id<<endl<<salary<<endl;
   }
   
   avay(avay& ab){
    name=ab.name;
    id=new int;
    *id=*(ab.id);
    salary=ab.salary;
   }
   ~avay(){
    cout<<"ID deleted"<<endl;
    delete id;
   }

};

int main (){

avay a,b;
a.as("abhay kumar singh",1204,1231.33);
a.show();
b=a;
b.show();

}