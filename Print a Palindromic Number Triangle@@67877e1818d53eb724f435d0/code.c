#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nst;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        nst--;
        printf("\n");
    }
    return 0;
}