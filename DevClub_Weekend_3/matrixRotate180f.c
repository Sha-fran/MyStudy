// void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 180 градусов по часовой стрелке.

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int newRow = 0, row = size - 1; newRow < size; newRow++, row-- ) {
        for ( int newCol = 0, col = size - 1; newCol < size; newCol++, col-- ) {
            target[newCol][newRow] = source[col][row];
        }
    }
}
