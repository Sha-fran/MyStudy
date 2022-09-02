// Считать с клавиатуры целое положительное число. Если число является целой степенью двойки, вывести "yes", иначе вывести "no".

// Пример ввода
// 8
// Пример вывода
// yes

#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    for ( ; number > 2 && number % 2 == 0; number /= 2 );
    if ( number == 2 || number == 1 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
