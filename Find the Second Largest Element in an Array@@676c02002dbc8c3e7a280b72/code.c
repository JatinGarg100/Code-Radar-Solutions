#include<stdio.h>
void findsecondlargest(int arr[],int n){
    if(n<2){
        printf("-1");
        return ;
    }
    int largest=arr[0];
    int secondlargest=-2147483648;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==-2147483648){
        printf("-1");
    }
    else{
        printf("%d",secondlargest);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findsecondlargest(arr,n);
    return 0;
}