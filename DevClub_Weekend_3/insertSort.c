// void insertSort(int array[], int len)

void insertSort(int array[], int len) {
    int tmp;
    
    for ( int i = 1, min = i - 1; i < len; i++ ) {
        if ( array[i] < array[min] ) {
            min = i;
        }
        tmp = array[min];
        array[min] = array[0];
        array[0] = tmp;
    }
    for ( int i = 0, j = i + 1; j < len; i++, j++ ) {
        for ( ; array[i] > array[j]; i--, j-- ) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
}
