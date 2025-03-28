#include<stdio.h>

void moveZerosToEnd(int arr[],int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[index++]=arr[i];
        }
    }
    while(index<size){
        arr[index++]=0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n){
        scanf("%d",&arr[i]);
    }
    moveZerosToEnd(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}