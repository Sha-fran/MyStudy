// Считывать с клавиатуры пароль. Если пароль совпадает с 1488, вывести на экран "accepted", иначе вывести на экран "incorrect password". После пяти неудачных попыток вывести на экран "denied".

// Пример ввода
// 1488
// Пример вывода
// accepted

#include <stdio.h>

int main() {
    int pass;
    int limit = 5;
    
    for ( int i = 0; i < limit; i++ ) {
        scanf("%d", &pass);
        if ( pass != 1488 ) {
            printf("incorrect password\n");
        }
        if ( pass == 1488 ) {
            printf("accepted\n");
            i = limit;
        }
        if ( i == limit - 1 ) {
            printf("denied\n");
        }
    }
    
    return 0;
}
