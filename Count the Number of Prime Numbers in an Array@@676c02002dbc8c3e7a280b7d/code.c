#include<stdio.h>
int isPrime(int num){
    if(num<2) return 0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int countPrime(int arr[],int size){
    int count=0;
    for(int i=0;i*i<size;i++){
        if(isPrime(arr[i])){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prime=countPrime(arr,n);
    printf("%d",prime);
    return 0;
}