// Условие задачи
// Написать функцию
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

// Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
// Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
// В случае равенства предпочтение отдаётся элементам из первого массива.
// Требуемая сложность: O(N)

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int len = len1 + len2;
    
    len1 -= 1;
    len2 -= 1;
    
    for ( int i = len - 1; i >= 0; i-- ) {
        if ( src1[len1] >= src2[len2] && len1 >= 0 ) {
            target[i] = src1[len1];
            len1 -= 1;
        } else {
            target[i] = src2[len2];
            len2 -= 1;
        }
    }
}
