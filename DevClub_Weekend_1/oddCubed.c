// Считать с клавиатуры целые числа min и max. Вывести в строку кубы всех нечетных чисел в промежутке от min до max включительно. В указаном промежутке гарантированно существует минимум одно нечетное число.

// Пример ввода
// 0 7
// Пример вывода
// 1 27 125 343

#include <stdio.h>

int main() {
    int min, max, oddCubed;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    
    for ( ; min < max - 1; min += 2 ) {
        oddCubed = min * min * min;
        printf("%d ", oddCubed);
    }
    oddCubed = min * min * min;
    printf("%d\n", oddCubed);
    
    return 0;
}
