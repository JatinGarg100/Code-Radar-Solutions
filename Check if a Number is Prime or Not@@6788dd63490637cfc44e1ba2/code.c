#include <stdio.h>

int main(){
    int num;
    scanf("%d ",&num);
    if(num<2){
        printf("Not Prime");
    }
    for(int a=2;a<num;a++){
        if(num%a==0){
            printf("Not Prime");
            
        }
        else{
            printf("Prime");
        }
    }
    
    return 0;
}