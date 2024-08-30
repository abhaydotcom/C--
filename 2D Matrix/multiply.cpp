#include<iostream>
using namespace std;
int main(){
    int a[3][3]={1,2,3,1,2,3,1,2,3};
    int b[3][3]={4,5,6,4,5,6,4,5,6};

    int res[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[3][3]=0;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}