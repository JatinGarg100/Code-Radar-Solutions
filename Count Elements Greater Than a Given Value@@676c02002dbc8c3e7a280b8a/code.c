#include<stdio.h>

int countGreater(int arr[],int size,int value){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>value){
            count++;
            
        }
    }
    return count;
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=countGreater(arr,n,x);
    printf("%d",result);
    return 0;
}