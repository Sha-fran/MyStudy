// Написать функцию:
// int isPrime(int n)
// Проверить, является ли данное число простым.

#include <stdio.h>

int isPrime(int n) {
    int check;
    
    if ( n <= 1 ) {
        return 0;
    }
    
    check = n - 1;
    for ( ; check > 1; check-- ) {
        if ( n % check == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number, result;
    
    scanf("%d", &number);

    result = isPrime(number);

    printf("%d\n", result);

    return 0;
}
