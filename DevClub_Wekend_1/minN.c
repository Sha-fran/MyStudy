// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
// Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
// Данная задача решается без массивов.

// Пример ввода
// 5
// 1 2 3 4 5
// Пример вывода
// 1

#include <stdio.h>

int main() {
    int number, counter, min;
    
    scanf("%d %d", &number, &min);
    
    for ( int i = 1; i < number; i++ ) {
        scanf("%d", &counter);
        if ( counter < min ) {
            min = counter;
        }
    }
    
    printf("%d\n", min);
    
    return 0;
}
