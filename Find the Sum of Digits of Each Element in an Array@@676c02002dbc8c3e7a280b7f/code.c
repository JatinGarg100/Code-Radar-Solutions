#include<stdio.h>
#include<stdlib.h>

int sumofDigits(int num){
    int sum=0;
    num=abs(num);
    while(num>0 || num<0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sumofDigits(arr[i]));
    }
    return 0;
}
