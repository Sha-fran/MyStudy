// Вывести числовую пирамидку на total строк. Порядок строк – обратный.
// В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

// Пример ввода
// 3
// Пример вывода
// 4 5 6
// 2 3
// 1

#include <stdio.h>

int main() {
    int total, number, last, counter;
    
    scanf("%d", &total);
    
    number = total;
    last = 1;
    
    for ( int i = 1; i < total; i++ ) {
        for ( int j = 0; j < number; j++, last += 1 );
        number -= 1;
    }
    
    number = total;
    last = last - number + 1;
    
    for ( int row = 0; row < total; row++ ) {
        counter = last - 1;
        for ( int col = 1; col < number; col++, last++ ) {
            printf("%d ", last);
        }
        printf("%d\n", last);
        number -= 1;
        last = counter - number + 1;
    }
    
    return 0;
}
