// void strUpperCase(char str[])

void strUpperCase(char str[]) {
    char diff = 'A' - 'a';
    
    for ( int i = 0; str[i] != 0; i++ ) {
        if ( str[i] >= 'a' ) {
            str[i] += diff;
        }
    }
}
