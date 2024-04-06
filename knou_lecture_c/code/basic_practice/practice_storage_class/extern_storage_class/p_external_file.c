#include "stdio.h"

extern char s[];

void extern_func() {
    printf("extern variable s is <%s>\n", s);
}