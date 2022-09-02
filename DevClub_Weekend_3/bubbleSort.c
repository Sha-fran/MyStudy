// void bubbleSort(int array[], int size)

void bubbleSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i, tmp = array[j]; j < size; j++ ) {
            if ( array[i] > array[j] ) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}
