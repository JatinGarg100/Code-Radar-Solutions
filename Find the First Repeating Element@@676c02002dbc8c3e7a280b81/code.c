#include<stdio.h>
void repeating(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=repeating(arr,n);
    if(result!=0){
        printf("%d",result);
    }
    else{
        printf("0");
    }
    return 0;
}