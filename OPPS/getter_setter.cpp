#include<iostream>
using namespace std;

class abhay{
    int age;
    public:
    string name;
     
   

   void set(int n){
    age=n;
   }
   int get(){
    return age;
   }

    
~abhay(){
    cout<<"Distructor called Memory is Deallocated"<<endl;
}


};
int main(){



abhay a;
a.set(21);
a.name="abhay";
cout<<"Name "<<a.name<<endl;
cout <<"age" << a.get()<<endl;




    

}