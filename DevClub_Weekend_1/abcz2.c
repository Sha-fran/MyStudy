// Считать с клавиатуры целое число.
// - Если число четное, вывести alpha
// - Если число кратно трем, вывести bravo
// - Если число кратно пяти, вывести charlie
// - Если число не кратно ни одному из них, вывести zulu

// Пример ввода
// 8
// Пример вывода
// alpha

#include <stdio.h>

int main() {
    int a, isMultiple;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        isMultiple = 1;
        printf("alpha\n");
    }
    if ( a % 3 == 0 ) {
        isMultiple = 1;
        printf("bravo\n");
    }
    if ( a % 5 == 0 ) {
        isMultiple = 1;
        printf("charlie\n");
    }
    if ( isMultiple != 1 ) {
        printf("zulu\n");
    }
    
    return 0;
}
