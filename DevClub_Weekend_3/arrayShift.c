// Написать функцию:
// void arrayShift(int array[], int size, int shift)
// Реализовать циклический сдвиг массива на shift элементов вправо. Максимизировать производительность при оптимальном использовании памяти.
// Требуемая сложность: O(N)

void arrayShift(int array[], int size, int shift) {
    int tmpArr[size];
    
    if ( shift >= 0 ) {
        if ( shift > size ) {
            shift %= size;
        }
        
        for ( int i = size - 1, j = shift - 1; j >= 0; i--, j-- ) {
            tmpArr[j] = array[i];
        }
        
        for ( int i = size - 1, j = size - shift - 1; j >= 0; i--, j-- ) {
            array[i] = array[j];
        }
        
        for ( int i = 0; i < shift; i++ ) {
            array[i] = tmpArr[i];
        }
    } else {
        shift *= -1;
        
        if ( shift > size ) {
            shift %= size;
        }
        
        for ( int i = 0; i < shift; i++ ) {
            tmpArr[i] = array[i];
        }
        
        for ( int i = 0, j = shift; j < size; i++, j++ ) {
            array[i] = array[j];
        }
        
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            array[i] = tmpArr[j];
        }
    }
}
