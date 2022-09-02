// int arrayScan(FILE *in, int array[], int limit)
// Считать из файла in не более limit элементов в массив array.
// Вернуть количество считанных элементов.

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;
    
    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++ );
    return quantity;
}

// int main () {
//     int array[10], result;
//     FILE *in = fopen("task.in", "r+");
//     FILE *out = fopen("task.out", "w+");

//     result = arrayScan(in, array, 10);

//     printf("result = %d\n", result);
//     fprintf(out, "%d", result);

//     fclose(in);
//     fclose(out);

// }
