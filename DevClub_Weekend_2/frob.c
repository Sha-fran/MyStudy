// Ввести положительную длину последовательности чисел, затем саму последовательность.
// Вывести искаженную последовательность, полученную применением к исходным членам побитовой операции xor с числом 42.
// Каждый член вывести на отдельной строке.
// Пример ввода
// 2
// 0 42
// Пример вывода
// 42
// 0

#include <stdio.h>

int intFscan() {
    int length;
    
    scanf("%d", &length);
    return length;
}

int main() {
    int length = intFscan();
    int array[length];
    
    for ( int i = 0; i < length; i++ ) {
        scanf("%d", &array[i]);
    }
    
    for ( int i = 0; i < length; i++ ) {
        array[i] ^= 42;
        printf("%d\n", array[i]);
    }
    
    return 0;
}
