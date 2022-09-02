// Считать с клавиатуры целое положительное число, вывести на экран количество всех делителей этого числа.
// Пример ввода
// 12
// Пример вывода
// 6

#include <stdio.h>

int main() {
    int number;
    int counter = 0;
    
    scanf("%d", &number);
    
    for ( int i = 0, check = number; i < number; i++ ) {
        if ( number % check == 0 ) {
            counter += 1;
        }
        check -= 1;
    }
    
    printf("%d\n", counter);
    
    return 0;
}
