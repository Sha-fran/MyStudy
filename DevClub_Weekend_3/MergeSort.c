// Задача mergeSort
// Условие задачи 

// В файле task.in дано число len и массив размером len элементов.
//  Отсортировать элементы в порядке неубывания.
//  Использовать алгоритм mergeSort.
//  Результат записать в task.out
//  Допустимо использование рекурсии.
//

#include <stdio.h>

int getLen(FILE *in) {
    int len;
    
    fscanf(in, "%d", &len);
    return len;
}

void arrayFill(FILE *in, int array[], int len) {
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int arraytmp[size];
    int increment = lo;
    int counter1 = lo;
    int counter2 = mid;
    
    for ( ; counter1 < mid && counter2 < hi; increment++ ) {
        if ( array[counter1] > array[counter2] ) {
            arraytmp[increment] = array[counter2];
            counter2 += 1;
        } else {
            arraytmp[increment] = array[counter1];
            counter1 += 1;
        }
    }
    for ( ; counter2 < hi; counter2++, increment++ ) {
        arraytmp[increment] = array[counter2];
    }
    for ( ; counter1 < mid; counter1++, increment++ ) {
        arraytmp[increment] = array[counter1];
    }
    for ( increment = lo; increment < hi; increment++ ) {
        array[increment] = arraytmp[increment];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid;
    
    if ( hi - lo > 1 ) {
        mid = (hi + lo) / 2;
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}

void arrayPrint(FILE *out, int array[], int len) {
    int last = len - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", last);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = getLen(in);
    int array[len];
    int lo = 0;
    int hi = len;
    
    printf("%d\n", len);
    arrayFill(in, array, len);
    mergeSort(array, lo, hi);
    arrayPrint(out, array, len);
    fclose(in);
    fclose(out);
    
    return 0;
}
