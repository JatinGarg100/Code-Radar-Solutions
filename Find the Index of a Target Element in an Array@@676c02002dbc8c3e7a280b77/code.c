#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    int c;    
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            c=i;
            printf("%d",c);
        }
        if(arr[i]!=x){
            printf("-1");
        }
        
    }
    
    return 0;
}