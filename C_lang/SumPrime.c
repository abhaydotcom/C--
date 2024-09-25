#include<stdio.h>
int main(){

int n=10;

int sum=0,i,j,isPrime;
for(i=2;i<=n;i++){
    isPrime=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
    sum+=i;
}
}
printf("%d",sum);

    return 0;
}