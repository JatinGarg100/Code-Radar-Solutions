#include <stdio.h>

int main(){
    int p,b,h;
    scanf("%d %d %d ",&p,&b,&h);
    if(h*h==p*p+b*b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;

}