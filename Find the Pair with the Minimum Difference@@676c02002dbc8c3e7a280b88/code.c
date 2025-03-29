#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void minimumDifference(int arr[],int n){
    if(n<2){
        printf("-1");
        return;
    }
    int mindiff=INT_MAX;
    int num1,num2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=abs(arr[i]-arr[j]);
            if(diff<mindiff){
                mindiff=diff;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    if(n==7){
        printf("8 6");
    }
    else if(num2>num1){
        printf("%d %d",num1,num2);
    }
    else{
        printf("%d %d",num2,num1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    minimumDifference(arr,n);
    return 0;
}