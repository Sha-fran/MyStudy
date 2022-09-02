// Условие задачи
// В файле task.in задана последовательность символов.
// Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
// Большие буквы считать как маленькие.
// Пример ввода
// Hello!
// Пример вывода
// e 1
// h 1
// l 2
// o 1

#include <stdio.h>

int strLen(FILE *in) {
    char c;
    int counter = 0;
    
    for ( ; fscanf(in, "%c", &c) != EOF; counter++ );
    
    fclose(in);
    
    return counter;
}

int strFill(FILE *in, char str[]) {
    int counter = 0;
    
    for ( ; fscanf(in, "%c", &str[counter]) != EOF; counter++ );
    
    fclose(in);
    
    return counter;
}

void strLowerCase(char str[]) {
    char diff = 'A' - 'a';
    
    for ( char *i = str; *i != '\0'; i++ ) {
        if ( *i >= 'A' && *i <= 'Z' ) {
            *i -= diff;
        }
    }
}

void charCount(FILE *out, char str[], char resultStr[], int array[], int *len) {
    int size = *len;
    
    for ( int i = 0, m = 0; i < size; i++ ) {
        int counter = 1;
        
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            for ( int j = i + 1; j < size; j++ ) {
                if ( str[i] == str[j] ) {
                    counter += 1;
                    for ( int k = j + 1; k < size; k++, j++ ) {
                        str[j] = str[k];
                    }
                    j = i;
                    size -= 1;
                }
            }
            array[m] = counter;
            resultStr[m] = str[i];
            m += 1;
            *len = m;
        }
    }
}

void charSort(char resultStr[], int array[], int len) {
    for ( int i = 0; i < len; i++ ) {
        for ( int j = i, tmp = 0; j < len; j++ ) {
            if ( resultStr[i] > resultStr[j] ) {
                tmp = resultStr[i];
                resultStr[i] = resultStr[j];
                resultStr[j] = tmp;
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

void printResult(FILE *out, char resultStr[], int array[], int len) {
    for ( int i = 0; i < len; i++ ) {
        fprintf(out, "%c %d\n", resultStr[i], array[i]);
    }
}

int main() {
    FILE *in = fopen("task.in", "r+");
    FILE *out = fopen("task.out", "w+");
    int len = strLen(in);
    int array[len];
    char str[len];
    char resultStr[len];
    
    fopen("task.in", "r+");
    strFill(in, str);
    strLowerCase(str);
    charCount(out, str, resultStr, array, &len);
    charSort(resultStr, array, len);
    printResult(out, resultStr, array, len);
    
    fclose(out);
    
    return 0;
}
