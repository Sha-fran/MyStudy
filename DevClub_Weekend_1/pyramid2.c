// Вывести числовую пирамидку на total строк.
// В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

// Пример ввода
// 3
// Пример вывода
// 1
// 2 3
// 4 5 6

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 0, counter = 1; row < size; row++ ) {
        for ( int col = 0; col < row; col++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    
    return 0;
}
