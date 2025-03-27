#include<stdio.h>

int firstPeak(int arr[],n){
    if(n==1){
        return 1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return 1;;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(firstPeak(arr,n)){
        printf("%d",arr[i]);
    }
}