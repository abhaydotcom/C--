#include<iostream>
using namespace std;

class avay{

private:
string name;
int age;

public:

string getname(){
    return name;
}
void setname(string n){
    name=n;
}

int getage(){
    return age;
}
void setage(int n){
    age=n;
}
~avay(){
    cout<<"Destructor is called Automatically\n";
}

};

class abhay:public avay{
    public:
    char section;
    int number;
    abhay(){
        cout<<"Abhay constructor called\n";
    }


};

class sem{
    public:
    void avy(){
        cout<<"I am Abhay Kumar singh\n";
    }

    
}s1;

class cls:public sem{
public:

}c1;

int main(){

c1.avy();


    return 0;
}