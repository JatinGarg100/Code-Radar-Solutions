#include<stdio.h>
int findsmallestmissing(int arr[],int n){
    for(int i=0;i<n;i++){
        while(arr[i]>0 && arr[i]<=n && arr[i]!=arr[arr[i]-1]){
            int temp;
            temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[temp-1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=findsmallestmissing(arr,n);
    printf("%d",result);
    return 0;
}