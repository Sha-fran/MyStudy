// void strCopy(char target[], char source[])

// Гарантируется, что строка target не короче строки source.

void strCopy(char target[], char source[]) {
    int index = 0;
    
    for ( ; source[index] != 0; index++ ) {
        target[index] = source[index];
    }
    target[index] = 0;
}
