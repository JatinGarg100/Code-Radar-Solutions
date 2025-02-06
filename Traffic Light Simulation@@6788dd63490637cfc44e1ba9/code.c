#include <stdio.h>

int main(){
    char a;
    scanf("%d",&a);
    if(a=='R'){
        printf("Stop");
    }
    else if(a=='G'){
        printf("Go");
    }
    else{
        printf("Slow Down");
    }
    return 0;
}