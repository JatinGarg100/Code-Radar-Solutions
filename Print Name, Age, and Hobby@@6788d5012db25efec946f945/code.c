#include <stdio.h>

int main(){
    char Name[25];
    int Age;
    char Hobby[30];
    scanf("%s",&Name);
    scanf("%d",&Age);
    scanf("%s",&Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;
}