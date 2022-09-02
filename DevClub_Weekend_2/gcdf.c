// Написать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

// int gcd(int a, int b) {
//     int divisor;
    
//     if ( a > b ) {
//         divisor = b;
//     } else {
//         divisor = a;
//     }
    
//     for ( ; divisor > 1; divisor-- ) {
//         if ( a % divisor == 0 && b % divisor == 0 ) {
//             return divisor;
//         }
//     }
    
//     return 0;
// }
