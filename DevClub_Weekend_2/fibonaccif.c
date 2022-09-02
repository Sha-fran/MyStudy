// int fibonacci(int n)
// Использовать рекурсию.

#include <stdio.h>

int intFscan(FILE *in) {
    int a;
    
    fscanf(in, "%d", &a);
    printf("%d", a);

    return a;
}

int fibonacci(int n) {
    if ( n > 2 ) {
        return fibonacci(n-1) + fibonacci(n-2);
    } else if ( n == 0 ) {
        return 0;
    } else if ( n > -2 ) {
        return 1;
    }
    return fibonacci(n+2) - fibonacci(n+1);
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int a = intFscan(in);

    int result;
    
    result = fibonacci(a);

    fprintf(out, "%d\n", result);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
