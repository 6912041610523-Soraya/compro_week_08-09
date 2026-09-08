#include <stdio.h>

int main() {
    int num, i;
    int prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }

    return 0;
}