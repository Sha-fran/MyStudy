// Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
// Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за звонок на короткий номер. За звонок по номерам специальных служб плата не взимается. В случае неопределенности вывести -1.

// Пример ввода
// 1488666 10
// Пример вывода
// 10$
// Пояснение
// Коротким номером считается любой трехзначный номер.
// Городским номером считается любой семизначный номер.
// Номера телефонов не могут начинаться с ноля.
// Номера спецслужб: 101, 102, 103, 104, 112.

#include <stdio.h>

int main() {
    int phone, minutes;
    
    scanf("%d %d", &phone, &minutes);
    
    if ( phone > 999999 && phone < 10000000 ) {
        printf("%d$\n", minutes*1);
    } else if ( phone == 101 || phone == 102 || phone == 103 || phone == 104 || phone == 112 ) {
        printf("%d$\n", 0);
    } else if ( phone > 99 && phone < 1000 ) {
        printf("%d$\n", minutes*40);
    } else {
        printf("%d\n", -1);
    }
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     int phone, minutes, rate, cost;
//     int length = 0;
    
//     scanf("%d %d", &phone, &minutes);
    
//     for ( int i = phone; i != 0; ) {
//         length += 1;
//         i /= 10;
//     }
    
//     if ( phone > 99 && phone < 999 && length == 3 ) {
//         rate = 40;
//     }
//     if ( phone == 101 || phone == 102 || phone == 103 || phone == 104 || phone == 112 ) {
//         rate = 0;
//     }
//     if ( phone >= 999 && length == 7 ) {
//         rate = 1;
//     }
    
//     if ( length == 3 || length == 7 ) {
//         cost = minutes * rate;
//         printf("%d$\n", cost);
//     } else {
//         printf("-1\n");
//     }
    
//     return 0;
// }
