#include<stdio.h>
void selectionSort(int arr[],int n){
    int minindex,temp;
    for(int i=0;i<n;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
