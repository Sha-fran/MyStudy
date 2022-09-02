// Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.

// Пример ввода
// 3
// Пример вывода
// 1 2 4 8

#include <stdio.h>

#define NUMBER 2

int main() {
    int exponent;
    int result = 1;
    
    scanf("%d", &exponent);
    
    for ( int i = 0; i < exponent; i++, result *= NUMBER ) {
        printf("%d ", result);
    }
    printf("%d\n", result);
    
    return 0;
}
