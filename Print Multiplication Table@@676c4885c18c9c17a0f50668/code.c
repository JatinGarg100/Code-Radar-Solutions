#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        printf("%dx%d=%d",n,i,n*i);
        printf("\n");
    }
}