#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void minimumDifference(int arr[],int n){
    if(n<2){
        printf("array should have at least two elements");
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
    printf("%d %d",num1,num2);
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