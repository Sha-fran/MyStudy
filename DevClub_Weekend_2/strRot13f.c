// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13

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
