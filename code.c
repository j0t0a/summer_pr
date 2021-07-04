/*
* @project sum_practice21
* @author Тертышная Ю.А., группа 515-и
* @date 30.06.2021
* @brief Учебная практика
* @task Анаграмма с удалением знаков препинания и перемешиванием символов
*/

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
