#include<stdio.h>

void duplicateEleement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                printf("%d",arr[i]);
                break;
            }
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
    duplicateEleement(arr,n);
    return 0;
}