// Написать функцию
// int sum(int x, int y)

int sum(int x, int y) {
    return x + y;
}

#include <stdio.h>

int main() {
    int a, b;
    int result;
    
    scanf("%d %d", &a, &b);

    result = sum (a, b);

    printf("%d\n", result);
    
    return 0;
}
