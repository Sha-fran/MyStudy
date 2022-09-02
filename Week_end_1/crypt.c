// Числа шифруются по определенному алгоритму с двумя секретными числовыми ключами – A и B.
// Число умножается на значение ключа A, затем к результату прибавляется значение ключа B.
// Шифруемые числа и значения ключей не превышают по модулю 30000.
// В ходе разведывательной операции стали известны зашифрованные эквиваленты двух чисел.
// Необходимо найти подходящие ключи и расшифровать зашифрованную последовательность чисел.

// Входные данные:
// plain1 encrypted1
// plain2 encrypted2
// length
// <последовательность length зашифрованных чисел>
// Пример ввода
// 1 3
// 2 5
// 5
// 7 9 11 13 15
// Пример вывода
// 3 4 5 6 7
// Пояснение
// В процессе шифрования числа умножали на A = 2, затем к результату добавляли B = 1.
// 1 * A + B = 3
// 2 * A + B = 5

#include <stdio.h>

#define TERM 30000

int main() {
    int plain1, plain2, encrypted1, encrypted2;
    int keyA, keyB;
    int length;
    int number;
    
    scanf("%d %d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length, &number);
    
    keyA = ((encrypted1 - encrypted2) / (plain1 - plain2)) % TERM;
    keyB = (encrypted1 - keyA * plain1) % TERM;
    
    for ( ; length > 1; length-- ) {
        number = (number - keyB) / keyA;
        printf("%d ", number);
        scanf("%d", &number);
    }
    number = (number - keyB) / keyA;
    printf("%d\n", number);
    
    return 0;
}
