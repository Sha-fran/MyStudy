// Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами и гостями на футбольном матче. Вывести на экран результат матча «Home team wins», «Away team wins», «Draw».

// Пример ввода
// 7 0
// Пример вывода
// Home team wins

#include <stdio.h>

int main() {
    int home, away;
    
    scanf("%d %d", &home, &away);
    
    if ( home > away ) {
        printf("Home team wins\n");
    } else if ( home < away ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}
