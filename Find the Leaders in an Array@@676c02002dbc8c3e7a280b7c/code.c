#include<stdio.h>

void findleaders(int arr[],int size){
    int maxright=arr[size-1];
    for(int i=size-2;i>=0;i--){
        if(arr[i]>maxright){
            maxright=arr[i];
            printf("%d",maxright);
        }
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findleaders(arr,n);
    return 0;
}