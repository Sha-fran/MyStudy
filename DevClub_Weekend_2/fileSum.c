// Считать два числа из файла task.in.
// Записать их сумму в файл task.out.

// Пример ввода
// 10 20
// Пример вывода
// 30

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int a, b;
    
    fscanf(in, "%d %d", &a, &b);
    fprintf(out, "%d\n", a+b);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
