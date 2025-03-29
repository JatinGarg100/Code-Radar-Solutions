#include<stdio.h>
int majorityelement(int arr[],int n){
    int maxcount=0;
    int majority;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]=arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            majority=arr[i];
        }
    }
    return majority;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    result=majorityelement(arr,n);
    if(result!=0){
        printf("%d",result);
    }
    else{
        printf("-1");
    }
    return 0;
}