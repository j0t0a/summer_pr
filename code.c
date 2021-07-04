#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Header.h"
int main()
{
    srand(time(NULL));
    char str[255];
    printf("Input string > ");
    gets_s(str);
    removeAllSights(str);
    shakeStr(str);
    printf("Result: %s\n", str);
    return 0;
}
