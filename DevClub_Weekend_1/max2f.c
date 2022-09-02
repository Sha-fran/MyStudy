// Написать функцию
// int max2(int x, int y)

int max2(int x, int y) {
    if ( x > y ) {
        return x;
    }
    return y;
}

int main() {
    int x, y;
    int result;
    
    scanf("%d %d", &x, &y);

    result = max2 (x, y);
    
    printf("%d\n", result);
    
    return 0;
}
