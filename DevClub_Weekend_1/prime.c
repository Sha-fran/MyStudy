// Вывести N-ное по счёту простое число (см. Википедию).
// N считать с клавиатуры.
// Оптимизировать работу программы, насколько это возможно.
// В случае неопределенности ответа вывести -1.

// Пример ввода
// 3
// Пример вывода
// 5

#include <stdio.h>

int isPrime(int n) {
    int check;
    
    check = n - 1;
    for ( ; check > 1; check-- ) {
        if ( n % check == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number, check;
    int result = 1;
    
    scanf("%d", &number);
    
    if ( number < 1 ) {
        printf("-1\n");
        
        return 0;
    }
    if ( number == 1 ) {
        printf("2\n");
        
        return 0;
    }
    
    for ( int i = 1; i <= number; i++ ) {
        result += 1;
        check = isPrime(result);
        if ( check == 0 ) {
            i -= 1;
        }
    }
    printf("%d\n", result);
    
    return 0;
}
