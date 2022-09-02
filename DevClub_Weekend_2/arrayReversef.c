// Написать функцию:
// void arrayReverse(int array[], int size)

// Использование дополнительного массива не разрешается.

void arrayReverse(int array[], int size) {
    for ( int i = size - 1, j = 0; j < i; i--, j++ ) {
        int temp = array[j];
        
        array[j] = array[i];
        array[i] = temp;
    }
}
