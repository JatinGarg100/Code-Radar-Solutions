#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a); 
    if (tolower(a)==a || tolower(a)==e || tolower(a)==i tolower(a)==o tolower(a)==u){
        printf("Vowel");
    }
    else if(isconsonant(a)){
        printf("Consonant");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
}
