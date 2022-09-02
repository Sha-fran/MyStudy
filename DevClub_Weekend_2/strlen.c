// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// 5

#include <stdio.h>

#define LENGTH 101

int strLen(char str[]) {
    int counter = 0;
    
    for ( ; str[counter] != 0; counter++ );
    return counter;
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    char str[LENGTH];
    
    fscanf(in, "%s", str);
    fprintf(out, "%d\n", strLen(str));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
