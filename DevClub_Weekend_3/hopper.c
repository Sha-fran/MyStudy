// Кузнечик начинает свой путь на клетке 0 и может прыгать на расстояние от 1 до <maxJump> клеток. Прыжки возможны только на целое число клеток вперед.
// Посчитать кол-во способов <ways>, которыми кузнечик может попасть на клетку <cell>.

// В файле task.in заданы целые числа:
// <maxJump> <cell>

// Вывести ways в task.out.

// Ограничения:
// 1 <= maxJump <= 100
// 1 <= cell <= 100
// 1 <= ways <= 999 999 999 999 999 999

// Пример ввода
// 2 3
// Пример вывода
// 3
// Пояснение
// Кузнечик может прыгать на 1 или 2 клетки.
// На 1-ю клетку он может попасть одним способом: 0->1.
// На 2-ю клетку он может попасть двумя способами: 0->2, 0->1->2.
// На 3-ю клетку можно попасть тремя способами: 0->1->2->3, 0->1->3, 0->2->3.

#include <stdio.h>

int getLen(FILE *in) {
    int len;
    
    fscanf(in, "%d", &len);
    return len;
}

unsigned long long arraySum(int array[], int size) {
    unsigned long long sum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

void arrayShiftLeft(int array[], int size, int tmp) {
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = tmp;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump = getLen(in);
    int cell = getLen(in);
    int ways;
    int array[maxJump];
    
    if ( maxJump > 100 ) {
        maxJump %= 100;
    }
    if ( cell > 100 ) {
        cell %= 100;
    }
    array[0] = 1;
    for ( int i = 1; i < maxJump; i++ ) {
        array[i] = array[i-1] * 2;
    }
    for ( int i = 0, len = cell - maxJump; i < len; i++ ) {
        ways = arraySum(array, maxJump);
        arrayShiftLeft(array, maxJump, ways);
    }
    fprintf(out, "%d\n", ways);
    fclose(in);
    fclose(out);
    
    return 0;
}
