// Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.

// Пример ввода
// 2 3
// Пример вывода
// 1 2 4 8

#include <stdio.h>

int main() {
    int number, exponent;
    int result = 1;
    
    scanf("%d %d", &number, &exponent);
    
    for ( int i = 0; i < exponent; i++, result *= number ) {
        printf("%d ", result);
    }
    printf("%d\n", result);
    
    return 0;
}
