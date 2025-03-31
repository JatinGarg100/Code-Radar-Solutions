#include<stdio.h>
void evenodd(int arr[],int n,int *even,int *odd){
    *even=0;
    *odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            (*even)++;
        }
        else{
            (*odd)++;
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
    int even,odd;
    evenodd(arr,n,&even,&odd);
    printf("%d %d",even,odd);
    return 0;
}