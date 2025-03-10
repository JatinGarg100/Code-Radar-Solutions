#include <stdio.h>

int isprime(int n) {
    if (n < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isprime(n)) {
        printf("1"); // Prime
    } else {
        printf("0"); // Not prime
    }

    return 0;
}
