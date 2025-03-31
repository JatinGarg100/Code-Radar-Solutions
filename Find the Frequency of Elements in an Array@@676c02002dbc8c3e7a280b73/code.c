#include<stdio.h>

void findFrequency(int arr[],int size){
    int checked[size];
    for(int i=0;i<size;i++){
        checked[i]=0;
    }
    for(int i=0;i<size;i++){
        if(checked[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
            checked[j]=1;
        }
    }
    printf("%d %d\n",arr[i],count);
    }   

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findFrequency(arr,n);
    return 0;    
}