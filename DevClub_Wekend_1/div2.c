// Считать min, max. Вывести в столбик чётные числа от min до max включительно.

#include <stdio.h>

#define DIV 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % DIV != 0 ) {
        min += 1;
    }
    
    for ( int i = min; i <= max; i += DIV ) {
        printf("%d\n", i);
    }
    
    return 0;
}
