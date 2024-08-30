#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>avay;
avay.push_back(10);
avay.push_back(20);
avay.push_back(30);
avay.push_back(40);
avay.push_back(50);

cout<<"Selected Array index: "<<avay.at(2)<<endl;

cout<<"First Array index: "<<avay.front()<<endl;
cout<<"Last Array index: "<<avay.back()<<endl;

avay.pop_back();
cout<<"Deleting the last Element: "<<avay.back()<<endl;
avay.clear();

if(avay.empty()){
	cout<<"Array is Empty"<<endl;
}else cout<<"Array is not Empty"<<endl;





}
