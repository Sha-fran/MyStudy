// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.

// Пример ввода
// 0 15
// Пример вывода
// 0
// 5
// 10
// 15

#include <stdio.h>

#define DIVIZOR 5

int main() {
    int min, max;
    int result;
    
    scanf("%d %d", &min, &max);
    
    result = min - min % DIVIZOR;
    
    if ( result < min ) {
        result += DIVIZOR;
    }
    for ( ; result <= max; result += DIVIZOR ) {
        printf("%d\n", result);
    }
    
    return 0;
}
