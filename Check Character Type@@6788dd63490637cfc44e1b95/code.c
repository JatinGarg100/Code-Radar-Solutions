#include <stdio.h>
#include<ctype>

int main(){
    char a;
    scanf("%d",&a);
    if(isvowel(a)){
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