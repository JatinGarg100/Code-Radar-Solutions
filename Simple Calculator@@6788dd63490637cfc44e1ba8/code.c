#include <stdio.h>

int main(){
    int a,b;
    char oper;
    scanf("%d %d %c",&a, &b, &oper);
    if(oper=='+'){
        printf("%d",a+b);
    }
    else if(oper=='-'){
        printf("%d",a-b);
    }
    else if(oper=='*'){
        printf("%d",a*b);
    }
    else if(oper=='/'){
        if(b!=0){
          printf("%d",a/b);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;

}