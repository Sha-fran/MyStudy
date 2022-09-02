#include <stdio.h>
#include <stdlib.h>

void memoryLeak(unsigned long *num) {
    int *initHelper = (int*)malloc(sizeof(int) * 10000000);

    if ( initHelper == NULL ) {
        printf("Helper ptr = NULL\n");

        return;
    }

    *num = (unsigned long)initHelper;

    free(initHelper);
}


int main() {
    int stackVar = 12;
    int *stackPtr = &stackVar;

    int *heapVar = (int*)malloc(sizeof(int));

    printf("stackPtr = %llu\n", stackPtr);
    printf("heapPtr  = %llu\n", heapVar);

    *heapVar = 234;

    free(heapVar);

    unsigned long foo;
    for ( int i = 0; i < 100; i++ ) {
        memoryLeak(&foo);
        printf("foo: %lu\n", foo);
    }
    
    return 0;
}
