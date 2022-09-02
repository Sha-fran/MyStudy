// Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
// Пример ввода
// 8
// Пример вывода
// 21

#include <stdio.h>

int fibonacci(int n) {
    int previous;
    int result;
    
    if ( n > 2 ) {
        previous = 1;
        result = 2;
        
        for ( int i = 3; i < n; i++ ) {
            int tmp = result;
            
            result += previous;
            previous = tmp;
        }
    } else if ( n == 0 ) {
        return 0;
    } else if ( n > 0 ) {
        return 1;
    } else if ( n == -1 ) {
        return 1;
    } else if ( n == -2 ) {
        return -1;
    } else if ( n < -2 ) {
        previous = -1;
        result = 2;
        
        for ( int i = -3; i > n; i-- ) {
            int tmp = result;
            
            result = previous - result;
            previous = tmp;
        }
    }
    
    return result;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", fibonacci(n));
    
    return 0;
}
