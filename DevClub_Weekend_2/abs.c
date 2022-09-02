// В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
// Прочитать последовательность в массив.
// Найти все отрицательные числа и заменить их положительными, равными по модулю.
// Результирующий массив вывести в task.out.

// Пример ввода
// 10
// 10 -20 30 40 -50 -60 70 80 90 -100
// Пример вывода
// 10 20 30 40 50 60 70 80 90 100

#include <stdio.h>

int arraySize(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

void scanArray(FILE *in, int array[], int size) {
    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ );
}

void arrayAbs(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

void printArray(FILE *out, int array[], int size) {
    size -= 1;
    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[size]);
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int size = arraySize(in);
    int array[size];
    
    scanArray(in, array, size);
    arrayAbs(in, array, size);
    printArray(out, array, size);
    
    return 0;
}
