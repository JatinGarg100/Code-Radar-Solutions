#include <stdio.h>

int isprime(int n){
    if(i<2){
        return 0;
    }
    for(int i=2,i*i<=n,i++){
        if(n%i=0){
            return 0;
        }
        return 1;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(isprime){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;

}