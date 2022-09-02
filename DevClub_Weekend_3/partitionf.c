// int partition(int array[], int start, int end)

// В качестве опорного элемента брать среднее арифметическое между start и end с округлением вниз.

int partition(int array[], int start, int end) {
    int tail = (start + end) / 2;
    int pivot = array[tail];
    int buf;
    
    array[tail] = array[end];
    array[end] = pivot;
    for ( tail = start; array[tail] < pivot; tail++ );
    for ( int marker = tail + 1; marker < end; marker++ ) {
        if ( array[marker] <= pivot ) {
            buf = array[tail];
            array[tail] = array[marker];
            array[marker] = buf;
            tail += 1;
        }
    }
    buf = array[tail];
    array[tail] = array[end];
    array[end] = buf;
    
    return tail;
}
