#include<stdio.h>
int maximumproduct(int arr[],int n){
    if(n<2){
        return -1;
    }
    int max1=0,max2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        if(arr[i]>max2){
            max2=arr[i];
        }
    }
    return max1*max2;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=maximumproduct(arr,n);
    printf("%d",result);
    return 0;
}
