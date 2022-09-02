// Вывести числовой квадрат заданного размера.
// Выведенные числа начинаются с единицы и постоянно увеличиваются.
// В каждой строке числа разделены пробелами.
// Порядок строк обратный.
// Размер считать с клавиатуры.

// Пример ввода
// 2
// Пример вывода
// 3 4
// 1 2

#include <stdio.h>

int main() {
    int number, counter, check;
    
    scanf("%d", &number);
    
    counter = number * number;
    
    for ( int row = 0; row < number; row++ ) {
        check = counter - number + 1;
        for ( int col = 1; col < number; col++, counter -= 1, check += 1 ) {
            printf("%d ", check);
        }
        printf("%d\n", check);
        counter -= 1;
        check += 1;
    }
    
    return 0;
}
