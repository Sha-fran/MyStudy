// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла

void arraySort(int array[], int size) {
    for ( int i = 0, len = size - 1; i < len; i++ ) {
        for ( int j = 0; j < len; j++ ) {
            if ( array[j] > array[j+1] ) {
                int temp = array[j];
                
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
