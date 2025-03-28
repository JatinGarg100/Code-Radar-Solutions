#include<stdio.h>
void findsecondLargest(int arr[],int n){
    if(n<2){
        printf("-1");
    }
    int largest=arr[0];
    int secondlargset=1214783648;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargset=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargset && arr[i]!=largest){
            secondlargset=arr[i];
        }
    }
    if(secondlargset==-2147483648){
        printf("Not found");
    }
    else{
        printf("%d",secondlargset);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findsecondLargest(arr,n);
    return 0;
}