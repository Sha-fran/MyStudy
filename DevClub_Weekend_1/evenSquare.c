// Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных чисел в промежутке от min до max включительно. В указанном промежутке гарантированно существует как минимум 1 парное число.

// Пример ввода
// 0 7
// Пример вывода
// 0 4 16 36

#include <stdio.h>

int main() {
    int min, max, result;
    
    scanf("%d %d", &min, &max);
    
    result = min - min % 2;
    if ( result < min ) {
        result += 2;
    }
    
    for ( ; result < max - 1; result += 2 ) {
        printf("%d ", result*result);
    }
    printf("%d\n", result*result);
    
    return 0;
}
