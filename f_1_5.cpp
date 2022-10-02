//
// Created by stephan on 9/25/22.
//
#include "middle.h"
#include <iostream>

void itc_num_print(int number){
    std::cout << number;
}

int itc_len_num(long long number) {
    long long cnt = 0;
    if (number < 0)
        number *= -1;
    if (number == 0)
        return 1;
    while (number > 0) {
        cnt++;
        number /= 10;
    }
    return cnt;
}

int itc_sum_num(long long number) {
    long long sum = 0;
    if (number < 0)
        number *= -1;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

long long itc_multi_num(long long number) {
    long long mp = 1;
    if (number == 0)
        return 0;
    if (number < 0)
        number *= -1;
    while (number > 0) {
        mp *= number % 10;
        number /= 10;
    }
    return mp;
}


int itc_max_num(long long number) {
    int max = -1;
    if (number == 0)
        return 0;
    if (number < 0)
        number *= -1;
    while (number > 0) {
        if (number % 10 > max) {
            max = number % 10;
        }
        number /= 10;
    }
    return max;
}
