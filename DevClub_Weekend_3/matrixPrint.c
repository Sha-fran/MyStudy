// void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size);
// Столбец – первый индекс, строка – второй.

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int limit = size - 1;
    
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < limit; row++ ) {
            fprintf(out, "%d ", matrix[row][col]);
        }
        fprintf(out, "%d\n", matrix[limit][col]);
    }
}
