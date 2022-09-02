// int strLen(char str[])

// Подсчитать длину заданной строки

#include <stdio.h>

int strLen(char str[]) {
    int counter = 0;
    
    for ( ; str[counter] != '\0'; counter++ );
    return counter;
}

int main() {
    char str[] = "Hello world!";
    int result;

    result = strLen(str);

    printf("%d\n", result);

    return 0;
}
