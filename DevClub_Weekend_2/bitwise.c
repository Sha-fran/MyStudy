// Считать из task.in два числа.
// Записать в task.out результат выполнения различных побитовых операций.

// Пример ввода
// 1 1
// Пример вывода
// 1&1=1
// 1|1=1
// 1^1=0
// 1<<1=2
// 1>>1=0

#include <stdio.h>

int intFscan(FILE *in) {
    int a;
    
    fscanf(in, "%d", &a);
    return a;
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int a = intFscan(in);
    int b = intFscan(in);
    
    fprintf(out, "%d&%d=%d\n", a, b, a&b);
    fprintf(out, "%d|%d=%d\n", a, b, a|b);
    fprintf(out, "%d^%d=%d\n", a, b, a^b);
    fprintf(out, "%d<<%d=%d\n", a, b, a<<b);
    fprintf(out, "%d>>%d=%d\n", a, b, a>>b);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
