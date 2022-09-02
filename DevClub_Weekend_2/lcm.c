// В файле task.in даны два целых положительных числа.
// Записать в файл task.out наименьшее общее кратное этих чисел.
// Пример ввода
// 3 5
// Пример вывода
// 15

#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int a, b;
    
    fscanf(in, "%d", &a);
    fscanf(in, "%d", &b);
    
    fprintf(out, "%d\n", lcm(a, b));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
