#include<stdio.h>

int countGreater(int arr[n],int size,int value){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>value){
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
    int x;
    scanf("%d",&x);
    countGreater(arr,n,x);
    return 0;
}