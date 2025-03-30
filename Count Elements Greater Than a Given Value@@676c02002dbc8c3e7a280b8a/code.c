#include<stdio.h>

int countGreater(int arr[],int size,int value){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>value){
            count++;
            return count;
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
    int result=countGreater(arr,n,x);
    printf("%d",result);
    return 0;
}