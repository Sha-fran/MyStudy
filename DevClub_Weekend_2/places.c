// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.

// Пример ввода
// 123
// Пример вывода
// 3

#include <stdio.h>

int main() {
    int number, length;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        number *= -10;
    }
    if ( number == 0 ) {
        printf("1\n");
    } else {
        for ( length = 0; number > 0; ) {
            number /= 10;
            length += 1;
        }
        
        printf("%d\n", length);
    }
    return 0;
}
