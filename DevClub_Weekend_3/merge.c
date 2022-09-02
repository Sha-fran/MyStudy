// void merge(int array[], int lo, int mid, int hi)
// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi

void merge(int array[], int lo, int mid, int hi) {
    int tmp;
    int counter2 = mid;
    
    for ( int counter1 = lo; counter1 < counter2; counter1++ ) {
        if ( array[counter1] > array[counter2] ) {
            tmp = array[counter1];
            array[counter1] = array[counter2];
            for ( int k = counter2 - 1; k > counter1; k-- ) {
                array[k+1] = array[k];
            }
            array[counter1+1] = tmp;
            counter2 += 1;
            if ( counter2 == hi ) {
                return;
            }
        }
    }
}
