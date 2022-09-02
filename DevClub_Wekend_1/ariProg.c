// Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. Вывести в строку через пробел члены заданной прогрессии.
// Задаваемое количество больше нуля.

// Пример ввода
// 12 2 4
// Пример вывода
// 12 14 16 18

#include <stdio.h>

int main() {
    int number, step, progress;
    
    scanf("%d %d %d", &number, &step, &progress);
    
    for ( int i = 1; i < progress; i++ ) {
        printf("%d ", number);
        number += step;
    }
    
    printf("%d\n", number);
    
    return 0;
}
