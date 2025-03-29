#include<stdio.h>
void maxFrequency(int arr[],int n){
    int maxcount=0;
    int maximum;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maximum=arr[i];
        }
    }
    printf("%d",maximum);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxFrequency(arr,n);
    return 0;
}