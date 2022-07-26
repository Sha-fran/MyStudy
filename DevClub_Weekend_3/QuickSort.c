// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм quickSort.
// Результат записать в task.out

#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivotIndex = (start + end) / 2;
    int pivot = array[pivotIndex];
    
    array[pivotIndex] = array[end];
    array[end] = pivot;
    pivotIndex = end;
    for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
        int tmp;
        
        for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
        for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
        tmp = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = tmp;
        if ( minIndex == end ) {
            pivotIndex = maxIndex;
        }
        if ( maxIndex == end ) {
            pivotIndex = minIndex;
        }
    }
    return pivotIndex;
}

void quickSort(int array[], int lo, int hi) {
    int pivot = partition(array, lo, hi);
    
    if ( lo < pivot - 1 ) {
        quickSort(array, lo, pivot-1);
    }
    if ( hi > pivot + 1 ) {
        quickSort(array, pivot+1, hi);
    }
}

int scanLength(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int length = scanLength(in);
    int array[length];
    
    for ( int i = 0; i < length; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    fclose(in);
    
    quickSort(array, 0, length-1);
    
    for ( int i = 0; i < length - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[length-1]);
    fclose(out);
    
    return 0;
}
