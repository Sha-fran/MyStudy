// Считать из файла task.in в память строку длиной не более 100 символов.
// Зашифровать её по алгоритму ROT13.
// Результат вывести в task.out.

// Пример ввода
// balk
// Пример вывода
// onyx

#include <stdio.h>

#define LENGTH 101

void strRot13(char str[]) {
    int rot13 = 13;
    
    for ( int i = 0, charI = str[i]; charI != 0; i++, charI = str[i] ) {
        if ( charI >= 'a' && charI <= 'm' ) {
            str[i] += rot13;
        } else if ( charI >= 'n' && charI <= 'z' ) {
            str[i] -= rot13;
        } else if ( charI >= 'A' && charI <= 'M' ) {
            str[i] += rot13;
        } else if ( charI >= 'N' && charI <= 'Z' ) {
            str[i] -= rot13;
        }
    }
}

void fprintFStr(FILE *out, char str[]) {
    for ( int i = 0; str[i] != 0; i++ ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    char str[LENGTH];
    
    fscanf(in, "%100s", str);
    
    strRot13(str);
    fprintFStr(out, str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
