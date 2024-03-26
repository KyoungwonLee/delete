#include <iostream>
#include <random>
#include <time.h>
#include <stdlib.h>

int rand_num() {
    srand(time(NULL));
    int rand_num1 = rand() % 10;
    int rand_num2 = rand() % 10;
    int rand_num3 = rand() % 10;
    int result = rand_num1 * 100 + rand_num2 * 10 + rand_num3;
    return result;
}