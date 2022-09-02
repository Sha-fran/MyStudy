// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

// Пример ввода
// 40
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 3

#include <stdio.h>

#define SIZE 100

int intFscan(FILE *in) {
    int needle;
    
    fscanf(in, "%d", &needle);
    return needle;
}

int arrayFscan(FILE *in, int array[], int size) {
    int quantity = 0;
    
    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        quantity += 1;
    }
    return quantity;
}

int arraySearch(int array[], int size, int needle) {
    for ( int index = 0; index < size; index++ ) {
        if ( array[index] == needle ) {
            return index;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int size = SIZE;
    int array[size];
    int needle = intFscan(in);
    
    size = arrayFscan(in, array, size);
    fclose(in);
    
    fprintf(out, "%d\n", arraySearch(array, size, needle));
    
    return 0;
}
