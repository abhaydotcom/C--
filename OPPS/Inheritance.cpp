#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;



};

class person:public Student{
public:
int uniqueID;
void b(){
    cout<<"Frist level";
}
};
class abhay{
    public:
    int phoneno;
    void a(){
        cout<<"This is Multiple  Inheritance"<<endl;
        cout<<endl;
    }

};

class ab:public person,public abhay{

};
int main(){
    Student a;
    a.name="Abhay KUmar Singh";
    a.rollno=212;
    cout<<"Name: "<<a.name<<endl;
    cout<<"RollNo: "<<a.rollno<<endl;
    cout<<endl;
    person b;
     b.name="Avay Singh";
     b.rollno=442;
     b.uniqueID=123132;
     cout<<"Name: "<<b.name<<endl;
     cout<<"UniqueID: "<<b.uniqueID<<endl;
     cout<<"RollNo: "<<b.rollno<<endl; 
     
   
    

     ab z;
     z.a();
     z.b();
}