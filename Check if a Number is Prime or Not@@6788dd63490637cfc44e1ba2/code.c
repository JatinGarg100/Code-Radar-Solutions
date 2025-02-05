#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a==0 || a==1){
        printf("Not Prime");
    }
    else if(a%2==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}