#include<stdio.h>

void findMaxMin(int arr[],int size,int *max,int *min){
    *max=*min=arr[0];
    for(int i=0;i<size;i++){
    if(arr[i]> *max){
        *max=arr[i];
    }
    if(arr[i]< *min){
        *min=arr[i];
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
    int max,min;
    findMaxMin(arr,n,&max,&min);
    printf("%d %d",min,max);
    return 0;
}