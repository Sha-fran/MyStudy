// Вычислить и вывести факториал считанного с клавиатуры целого числа. Гарантируется, что вводимое число не превышает 10.

// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.

// Пример ввода
// 5
// Пример вывода
// 120

#include <stdio.h>

int main() {
    int number, factorial;
    
    scanf("%d", &number);
    factorial = 1;
    
    if ( number < 0 ) {
        printf("-1\n");
    } else {
        number += 1;
        for ( int i = 2; i < number; i++ ) {
            factorial *= i;
        }
        printf("%d\n", factorial);
    }
    
    return 0;
}
