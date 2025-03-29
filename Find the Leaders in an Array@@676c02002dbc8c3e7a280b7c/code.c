#include<stdio.h>

void findleaders(int arr[],int size){
    for(int i=0;i<size;i++){
        int isleader=1;
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[0]){
                isleader=0;
                break;
            }
        }
        if(isleader){
            printf("%d",arr[i]);
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
    findleaders(arr,n);
    return 0;
}