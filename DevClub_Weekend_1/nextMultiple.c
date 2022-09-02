// Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
// Вывести на экран наименьшее число, кратное делителю, не меньшее делимого.
// Пример ввода
// 15 6
// Пример вывода
// 18

#include <stdio.h>

int main() {
    int divider, devisor;
    int result;
    
    scanf("%d %d", &divider, &devisor);
    
    if ( devisor < 0 && devisor < divider ) {
        devisor *= -1;
    }
    result = divider - divider % devisor;
    if ( result < divider ) {
        result += devisor;
    }
    printf("%d\n", result);
    
    return 0;
}



// Variants in process

// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     if ( a % b != 0 && a > 0 ) {
//         a = a + a % b;
//     }
    
//     if ( a % b != 0 && a < 0 ) {
//         a = a - a % b;
//     }
    
//     printf("%d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     if ( a % b != 0 && a > 0 ) {
//         for ( ; a % b != 0; a++ );
//     }
    
//     if ( a % b != 0 && a < 0 ) {
//         a = a - a % b;
//     }
    
//     printf("%d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     if ( a > 0 ) {
//         for ( ; a % b != 0; a++ );
//     } else {
//         a = a - a % b;
//     }
    
//     printf("%d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     for ( ; a % b != 0; a++ ) {
//         a = a - a % b;
//     }
    
//     printf("%d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     if (a > 0) {
//         a = a + a % b;
//     } else {
//         a = a - a % b;
//     }
    
//     printf("%d\n", a);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
//     int result;
    
//     scanf("%d %d", &a, &b);
    
//     if ( b < 0 && b < a ) {
//         b *= -1;
//     }
//     result = a - a % b;
//     if ( result < a ) {
//         result += b;
//     }
//     printf("%d\n", result);
    
//     return 0;
// }
