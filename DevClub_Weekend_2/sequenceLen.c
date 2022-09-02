// Считать из файла task.in последовательность чисел размером не более 100 элементов.
// Посчитать длину последовательности и вывести ее в task.out.

// Пример ввода
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 10

#include <stdio.h>

#define LIMIT 100

int scanFArray(FILE *in, int array[], int size) {
    int number = 0;
    
    for ( int i = 0; i < LIMIT && fscanf(in, "%d", &array[i]) == 1; i++, number++ );
    return number;
}

void printFArray(FILE *out, int number) {
    fprintf(out, "%d\n", number);
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int array[LIMIT];
    
    printFArray(out, scanFArray(in, array, LIMIT));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
