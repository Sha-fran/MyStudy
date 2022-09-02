// Условие задачи
// Считать с клавиатуры положительную длину числовой последовательности и саму последовательность. Проверить, упорядочена ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в противном случае вывести «no».

// Пример ввода
// 5
// -20 -15 0 12 15
// Пример вывода
// yes

#include <stdio.h>

int main() {
    int number, counter, min;
    
    scanf("%d %d", &number, &min);
    
    for ( int i = 1; i < number; i++ ) {
        scanf("%d", &counter);
        if ( counter >= min ) {
            min = counter;
        } else {
            printf("no\n");
            return 0;
        }
    }
    
    printf("yes\n");
    
    return 0;
}
