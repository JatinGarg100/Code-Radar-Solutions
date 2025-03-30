#include<stdio.h>
void runningsum(int arr[],int n,int result[]){
    result[0]=arr[0];
    for(int i=0;i<n;i++){
        result[i]=result[i-1]+arr[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result[n];
    runningsum(arr,n,result);
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }
    return 0;
}