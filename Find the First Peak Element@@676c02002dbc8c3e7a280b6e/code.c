#include<stdio.h>

int firstPeak(int arr[],int n){
    if(n==1){
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return i;
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
    int peakindex=firstPeak(arr,n);
    if(peakindex!=-1){
        printf("%d",arr[peakindex]);
    }
    else{
        printf("No peak element is found");
    }
}