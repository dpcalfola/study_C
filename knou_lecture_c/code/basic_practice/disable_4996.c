#include "stdio.h"

// Disable warning 4996
// visual studio 2019 makes runtime error if you don't disable warning 4996 to use scanf, printf etc.
#pragma warning(disable: 4996)

int main() {
    printf("#pragma warning(disable: 4996)\n"
           "    Disable warning 4996\n"
           "    visual studio 2019 makes runtime error if you don't disable warning 4996 to use scanf, printf etc. \n"
           );
    return 0;
}