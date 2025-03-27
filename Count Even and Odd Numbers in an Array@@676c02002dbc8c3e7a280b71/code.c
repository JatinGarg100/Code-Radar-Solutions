#include<stdio.h>

void evenodd(int arr[],int size,int *evencount,int *oddcount){
    *evencount=*oddcount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            (*evencount)++;
        }
        else{
            (*oddcount)++;
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
    int evencount,oddcount;
    evenodd(arr,n,&evencount,&oddcount);
    printf("%d %d",evencount,oddcount);
    return 0;

}