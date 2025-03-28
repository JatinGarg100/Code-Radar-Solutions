#include<stdio.h>
void secondLargest(int arr[],int n){
    if(n<2){
        printf("not enough numbers");
    }
    int largest=arr[0];
    int secondlargset;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargset=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargset && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    printf("%d",secondlargset);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    secondLargest(arr,n);
    return 0;
}