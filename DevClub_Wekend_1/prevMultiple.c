// Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
// Вывести на экран наибольшее число, кратное делителю, не превышающее делимое.

// Пример ввода
// 15 6
// Пример вывода
// 12

#include <stdio.h>

int main() {
    int dividend, devisor;
    int result;
    
    scanf("%d %d", &dividend, &devisor);
    
    if ( devisor < 0 ) {
        devisor *= -1;
    }
    result = dividend - dividend % devisor;
    if ( result > dividend ) {
        result -= devisor;
    }
    printf("%d\n", result);
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     int dividend, divisor, check;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     check = divisor;
    
//     if ( dividend < 0 ) {
//         check = dividend * (-1);
//     }
    
//     if ( dividend < 0 && dividend > divisor ) {
//         dividend = divisor;
//     } else if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else if ( dividend < 0 && check < divisor ) {
//         dividend = divisor * (-1);
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int dividend, divisor, temp;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( divisor < 0 ) {
//         divisor *= -1;
//     }
    
//     if ( dividend < 0 ) {
//         temp = dividend * (-1);
//     }
    
//     if ( temp < divisor && dividend < 0 ) {
//         dividend = divisor * (-1);
//     } else if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int dividend, divisor;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( dividend < 0 && divisor < 0 && divisor < dividend ) {
//         dividend = divisor;
//     } else if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int dividend, divisor, temp;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( dividend < 0 && dividend > divisor ) {
//         dividend = divisor;
//     } else if ( dividend < 0 ) {
//         dividend += dividend % divisor;
//     } else {
//         dividend -= dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int dividend, divisor, temp;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( divisor < 0 ) {
//         divisor *= -1;
//     }
    
//     if ( dividend < 0 ) {
//         temp = dividend * (-1);
//     }
    
//     if ( temp < divisor && dividend < 0 ) {
//         dividend = divisor * (-1);
//     } else if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int dividend, divisor, check;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     check = dividend * (-1);
    
//     if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else if ( dividend < 0 && dividend > divisor ) {
//         dividend = divisor;
//     } else if ( dividend < 0 && check < divisor ) {
//         dividend = divisor * (-1);
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int dividend, divisor;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( divisor > 0 ) {
//         divisor *= (-1);
//     }
    
//     if ( dividend > 0 ) {
//         dividend -= dividend % divisor;
//     } else if ( dividend < 0 && dividend > divisor ) {
//         dividend = divisor;
//     } else {
//         dividend += dividend % divisor;
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }
