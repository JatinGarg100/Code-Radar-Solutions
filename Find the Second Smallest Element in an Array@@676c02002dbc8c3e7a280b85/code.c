#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int secondmin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            secondmin=min;
            min=arr[i];
        }
        else if(arr[i]<secondmin && arr[i]!=min){
            secondmin=arr[i];
        }
    }
    if(secondmin=min){
        printf("-1");
    }
    else{
        printf("%d",secondmin);
    }
    return 0;
    
    
}