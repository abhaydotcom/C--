#include<iostream>
#include<fstream>
#include<sstream>
#include<windows.h>
using namespace std;

class student{
    private:
    string name,rollno;
    float CGPA;

    public:
    student():name(""),rollno(""),CGPA(0.0){}

    void setname(string name){
        this->name=name;
    }
    void setrollno(string rollno){
        this->rollno=rollno;
    }
    void setcgpa(float CGPA){
        this->CGPA=CGPA;
    }

    string getname(){
        return name;
    }
    string getrollno(){
        return rollno;
    }
    float getcgpa(){
        return CGPA;
    }

};

void add(student s){
    string Name,Roll;
    float Cgpa;
    cout<<"\tEnter Your name"<<endl;
    cin>>Name;
    s.setname(Name);
    cout<<"\tEnter Your RollNo"<<endl;
    cin>>Roll;
    s.setrollno(Roll);
    cout<<"\tEnter Your CGPA"<<endl;
    cin>>Cgpa;
    s.setcgpa(Cgpa);

    ofstream out("D:/Student.txt",ios::app);
    if(!out){
        cout<<"\tERROR: File Can't Open"<<endl;
    }
    else{
        out<<s.getname()<<" : "<<s.getrollno()<<" : "<<s.getcgpa()<<endl;
        cout<<"\tStudent Added Succesfully"<<endl;
    }
    out.close();
}

void search(student s){
    string name;
    cout<<"\tEnter Name"<<endl;
    cin>>name;
    ifstream in("D:/Student.txt");
    if(!in){
        cout<<"\tError: File Can't Open"<<endl;
    }
    else{
        string line;
        bool found =false;
        while(getline(in,line)){
            int p=line.find(name);
            if(p!=string::npos){
                cout<<"NAME | ROLLNO | CGPA"<<endl;
                cout<<line<<endl;
                found=true;           
              }
        }
        if(!found){
            cout<<"\tStudent Not Found"<<endl;
        }
    }
}

void update(student s){
    string rollno;
    cout<<"\tEnter Roll no"<<endl;
    cin>>rollno;
    ifstream in("D:/Student.txt");
    if(!in){
        cout<<"\tError"<<endl;
    }
    ofstream out("D:/Student temp.txt");
    if(!out){
        cout<<"\tError";
        out.close();
    }
    string line;
    bool found=false;
    while(getline(in,line)){
        int x=line.find(rollno);
        if(x!=string::npos){
            found=true;
            float newCgpa;
            cout<<"\tEnter New CGPA"<<endl;
            cin>>newCgpa;
            stringstream  q;
            q<<newCgpa;
            string newCGPA=q.str();
            int cgpsPos=line.find_last_of(':');
            line.replace(cgpsPos+2,string::npos,newCGPA);
            cout<<"\tUpdate for RollNo "<<rollno<<endl;

        }
        out<<line<<endl;
    }
    if(!found){
        cout<<"\tStudent Not found"<<endl;
    }
    out.close();
    in.close();
    remove("D:/Student.txt");
    rename("D:/Student temp.txt","D:/Student.txt"); 
}

int main(){
    student s;
    bool exit=false;
    while(!exit){
        system("cls");
        cout<<"\tWelcome To Student Management System"<<endl;
        cout<<"\t************************************"<<endl;
        cout<<"\t1.Add Student"<<endl;
        cout<<"\t2.Search Student"<<endl;
        cout<<"\t3.Update Student"<<endl;
        cout<<"\t4.Exit"<<endl;
        cout<<"\tEnter your choice"<<endl;
        int val;
        cin>>val;
        if(val==1){
            system("cls");
            add(s);
            Sleep(4000);

        }

        else if(val==2){
            system("cls");
            search(s);
            Sleep(5000);
        }
        else if(val==3){
            system("cls");
            update(s);
            Sleep(4000);

        }

        else if(val==4){
            system("cls");
            exit=true;
            cout<<"Exited!!!!"<<endl;
            Sleep(4000);
        }
    }
}