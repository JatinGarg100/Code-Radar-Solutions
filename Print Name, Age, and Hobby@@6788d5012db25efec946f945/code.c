#include <stdio.h>

int main(){
    char Name[25];
    int Age;
    char Hobby[30];
    scanf("%s",&Name);
    scanf("%d",&Age);
    scanf("%s",&Hobby);
    printf("Name: %s",Name);
    printf("Age: %d",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}