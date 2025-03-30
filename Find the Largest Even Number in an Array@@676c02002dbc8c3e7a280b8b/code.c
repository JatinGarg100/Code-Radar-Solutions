#include<stdio.h>
#include<limits.h>
int findlargesteven(int arr[],int n){
    int maxEven=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>maxEven){
                maxEven=arr[i];
            }
        }
    }
    return maxEven;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=findlargesteven(arr,n);
    printf("%d",result);
    return 0;
}