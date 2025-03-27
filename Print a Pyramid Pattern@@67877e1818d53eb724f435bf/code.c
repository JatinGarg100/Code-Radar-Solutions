#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-2;k>=1;k--)
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}