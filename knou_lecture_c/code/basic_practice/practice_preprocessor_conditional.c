#include <stdio.h>

#define CONDITION 1


void main() {

// 0 is considered as false
// 1 is considered as true
#if CONDITION
    printf("Compile A");
#else
    printf("Compile B");
#endif
}