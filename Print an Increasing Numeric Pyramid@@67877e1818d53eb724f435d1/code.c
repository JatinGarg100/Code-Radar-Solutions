#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp-1;k++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}