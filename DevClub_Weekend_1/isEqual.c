//Считать с клавиатуры 2 целых числа. Если они равны вывести на экран «yes», в противном случае вывести «no».
//
//Пример ввода
//-20 20
//Пример вывода
//no

#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if ( a == b ) {
        printf("yes");
    } else {
        printf("no");
    }
    
    return 0;
}
