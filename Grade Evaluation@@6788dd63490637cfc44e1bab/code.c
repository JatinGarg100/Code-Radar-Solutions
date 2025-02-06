#include <stdio.h>

int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case 1:
        printf("Excellent");
        break;
        case 2:
        printf("Good");
        break;
        case 3:
        printf("Average");
        break;
        case 4:
        printf("Below");
        break;
        case 5:
        printf("Fail");
        break;
    }
    return 0;
}