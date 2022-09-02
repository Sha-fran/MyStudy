// Написать функцию, возвращающую индекс искомого числа в массиве либо -1 в случае, если число в массиве не содержится.
// int arraySearch(int array[], int size, int needle)

int arraySearch(int array[], int size, int needle) {
    for ( int index = 0; index < size; index++ ) {
        if ( array[index] == needle ) {
            return index;
        }
    }
    return -1;
}
