// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.

// Пример ввода
// 0 9
// Пример вывода
// 0
// 3
// 6
// 9

#include <stdio.h>

#define DIVIZOR 3

int main() {
    int min, max;
    int result;
    
    scanf("%d %d", &min, &max);
    
    result = min - min % DIVIZOR;
    
    if ( result < min ) {
        result += DIVIZOR;
    }
    for ( ; result <= max; result += DIVIZOR ) {
        printf("%d\n", result);
    }
    
    return 0;
}


// #include <stdio.h>

// #define DIV 3

// int main() {
//     int min, max;
    
//     scanf("%d %d", &min, &max);

//     if ( min > 0 && min < DIV ) {
//         min = DIV;
//     } else if ( min > 0 ) {
//         min += min % DIV;
//     } else {
//         min -= min % DIV;
//     }
    
//     for ( int i = min; i <= max; i += DIV ) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }
