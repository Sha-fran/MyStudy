// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
// Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.

// Пример ввода
// 5
// 1 2 3 4 5
// Пример вывода
// 5

#include <stdio.h>

int main() {
    int number, counter, max;
    
    scanf("%d %d", &number, &max);
    
    for ( int i = 1; i < number; i++ ) {
        scanf("%d", &counter);
        if ( counter > max ) {
            max = counter;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
