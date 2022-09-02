// void selectSort(int array[], int size)

void selectSort(int array[], int size) {
    int tmp, index;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i, k = j + 1; k < size; k++ ) {
            tmp = array[j];
            index = j;
            if ( array[j] > array[k] ) {
                tmp = array[k];
                index = k;
                j += 1;
            }
            array[index] = array[i];
            array[i] = tmp;
        }
    }
}
