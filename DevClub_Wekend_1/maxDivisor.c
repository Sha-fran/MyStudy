// Считать с клавиатуры целое положительное число. Вывести на экран наибольший его нетривиальный делитель. В случае неопределенности вывести 0.

// Пример ввода
// 12
// Пример вывода
// 6

#include <stdio.h>

int main() {
    int num, divisor;
    
    scanf("%d", &num);
    
    for ( divisor = num / 2; divisor > 1; divisor-- ) {
        if ( num % divisor == 0 ) {
            printf("%d\n", divisor);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int num, divisor;
    
//     scanf("%d", &num);
    
//     if ( num == 0 || num == 1 || num == 2 ) {
//         printf("0\n");
//     } else {
//         for ( divisor = num - 1; num % divisor != 0; divisor-- );
//         if ( divisor == 1 ) {
//             printf("0\n");
//         } else {
//             printf("%d\n", divisor);
//         }
//     }
    
//     return 0;
// }
