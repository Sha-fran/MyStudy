// Считать с клавиатуры целые числа min, max и положительный делитель. Вывести в столбик числа, кратные делителю, от min до max включительно.

// Пример ввода
// 0 8 2
// Пример вывода
// 0
// 2
// 4
// 6
// 8

#include <stdio.h>

int main() {
    int min, max, divider, result;
    
    scanf("%d %d %d", &min, &max, &divider);
    
    result = min - min % divider;
    
    if ( result < min ) {
        result = result + divider;
    }
    
    for ( ; result <= max; result += divider ) {
        printf("%d\n", result);
    }
    
    return 0;
}
