#include<stdio.h>
void findPairs(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==value){
                printf("%d %d\n",arr[i],arr[j]);
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
    int x;
    scanf("%d",&x);
    findPairs(arr,n,x);
    return 0;
}