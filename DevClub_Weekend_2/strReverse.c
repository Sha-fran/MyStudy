// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// olleh

#include <stdio.h>

#define LENGTH 100

int strFScan(FILE *in, char str[LENGTH], int size) {
    for ( int i = 0; fscanf(in, "%c", &str[i]) == 1; i++, size += 1 );
    return size;
}

void strFPrint(FILE *out, char str[LENGTH], int size) {
    for ( int i = size - 1; i >= 0; i-- ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    char str[LENGTH];
    int size = 0;
    
    size = strFScan(in, str, size);
    
    strFPrint(out, str, size);
    
    fclose(in);
    fclose(out);
    return 0;
}


// #include <stdio.h>

// #define LENGTH 100

// int strFScan(FILE *in, char str[LENGTH], int size) {
//     for ( int i = 0; fscanf(in, "%c", &str[i]) == 1; i++, size += 1 );
//     return size;
// }

// void strRev(FILE *in, char str[LENGTH], int size) {
//     for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
//         char temp = str[i];
        
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// void strFPrint(FILE *out, char str[LENGTH], int size) {
//     for ( int i = 0; i < size; i++ ) {
//         fprintf(out, "%c", str[i]);
//     }
//     fprintf(out, "\n");
// }

// int main() {
//     FILE *in = fopen("task.in", "r+");
//     FILE *out = fopen("task.out", "w+");
//     char str[LENGTH];
//     int size = 0;
    
//     size = strFScan(in, str, size);
    
//     strRev(in, str, size);
//     strFPrint(out, str, size);
    
//     fclose(in);
//     fclose(out);
//     return 0;
// }
