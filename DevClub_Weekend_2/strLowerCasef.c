// void strLowerCase(char str[])

void strLowerCase(char str[]) {
    char diff = 'A' - 'a';
    
    for ( char *i = str; *i != '\0'; i++ ) {
        if ( *i >= 'A' && *i <= 'Z' ) {
            *i -= diff;
        }
    }
}
