
#include<stdio.h>


int main(){

int arr[3][3]={1,2,3,1,2,3,1,2,3};
int brr[3][3]={1,2,3,1,2,3,1,2,3};
int res[3][3];
int n=3;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
            res[i][j]+=arr[i][k]+brr[k][j];
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf(" %d",res[i][j]);
    }
    printf("\n");
}

    return 0;
}