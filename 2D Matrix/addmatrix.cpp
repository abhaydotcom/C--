#include<iostream>
using namespace std;
int main(){
	
	int arr[2][2];
	
	cout<<"Enter the First Matrix element of 2*3"<<endl;
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			cin>>arr[i][k];
		}
	}

	int brr[2][2];
	cout<<"Enter the  second matrix element of 2*3"<<endl;
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			cin>>brr[i][k];
		}
	}
	int res[2][2];
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			res[i][k]=arr[i][k]+brr[i][k];
		}
	}

	cout<<"The Addition of Matrix is: "<<endl;
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			cout<<res[i][k]<<" ";
		}
		cout<<"\n";
	}
}