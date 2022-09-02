// Считать с клавиатуры два целых числа, причём второе число не меньше первого.
// Вывести в строку все чётные числа в промежутке от первого до второго включительно.
// В указанном промежутке гарантировано наличие хотя бы одного числа, подлежащего выводу.

// Пример ввода
// 7 15
// Пример вывода
// 8 10 12 14

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    max -= 1;
    if ( min > 0 ) {
        min += min % 2;
    } else {
        min -= min % 2;
    }
    
    for ( ; min < max; min += 2 ) {
        printf("%d ", min);
    }
    printf("%d\n", min);
    
    return 0;
}


#include <stdio.h>

int main() {
    int min, max, check;
    
    scanf("%d %d", &min, &max);
    
    max -= 1;
    check = min - min % 2;
    if ( check < min ) {
        check += 2;
    }
    
    for ( ; check < max; check += 2 ) {
        printf("%d ", check);
    }
    printf("%d\n", check);
    
    return 0;
}


// #include <stdio.h>

// #define STEP 2

// int main() {
//     int min, max;
    
//     scanf("%d %d", &min, &max);
    
//     if ( min > 0 ) {
//         min += min % STEP;
//     } else {
//         min -= min % STEP;
//     }
    
//     for ( int i = min + 1; i < max; i += STEP ) {
//         printf("%d ", min);
//         min += STEP;
//     }
    
//     printf("%d\n", min);
    
//     return 0;
// }


// #include <stdio.h>

// #define STEP 2

// int main() {
//     int min, max, temp;
    
//     scanf("%d %d", &min, &max);
    
//     temp = min + min % STEP;
    
//     if ( temp < min ) {
//         temp += STEP;
//     }
//     for ( int i = temp + 1; i < max; i += STEP ) {
//         printf("%d ", temp);
//         temp += STEP;
//     }
    
//     printf("%d\n", temp);
    
//     return 0;
// }
