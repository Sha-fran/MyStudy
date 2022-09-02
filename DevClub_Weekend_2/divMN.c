// Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
// Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
// В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.

// Пример ввода
// 0 12 2 3
// Пример вывода
// 0
// 6
// 12

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
    int min, max, m, n, multiple, result;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    multiple = lcm(m, n);
    result = min - min % multiple;
    
    if ( result < min ) {
        result += multiple;
    }
    
    for ( ; result <= max; result += multiple ) {
        printf("%d\n", result);
    }
    
    return 0;
}
