// Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
// Вывести в консоль число, записанное в новой системе счисления.
// В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
// Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.

// Пример ввода
// -255 16
// Пример вывода
// -FF

#include <stdio.h>

int main() {
    int number, base;
    int power = 1;
    
    scanf("%d %d", &number, &base);
    
    if ( number < 0 ) {
        printf("-");
        number *= -1;
    }
    
    for ( int i = number; i >= base; i /= base ) {
        power *= base;
    }
    
    for ( ; power > 0; power /= base ) {
        int dif = number / power;
        
        if ( dif > 9 ) {
            dif += ('A' - 10);
            printf("%c", dif);
        } else {
            printf("%d", dif);
        }
        number %= power;
    }
    printf("\n");
    
    return 0;
}
