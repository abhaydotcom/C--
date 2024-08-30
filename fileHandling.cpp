#include<iostream>
#include<fstream>
using namespace std;
int  main(){
ofstream a("txt.txt");
a<<"Hello Everyone This side Abhay kumar singh"<<endl;
a.close();
string l;
ifstream q("txt.txt");
while(getline(q,l)){
    cout<<l;
}
a.close();
}