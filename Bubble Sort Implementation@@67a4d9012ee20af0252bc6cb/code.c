#include<stdio.h>

void bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
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
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}