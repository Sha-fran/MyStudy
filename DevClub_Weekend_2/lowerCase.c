// В файле task.in дана последовательность символов.
// Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// ABCD
// Пример вывода
// abcd

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    char diff = 'A' - 'a';
    
    for ( char a; fscanf(in, "%c", &a) == 1; ) {
        if ( a >= 'A' && a <= 'Z' ) {
            a -= diff;
        }
        fprintf(out, "%c", a);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    return 0;
}
