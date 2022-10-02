//
// Created by stephan on 9/25/22.
//
#include "middle.h"

int itc_min_num(long long number) {
    int min = 10;
    if (number == 0)
        return 0;

    if (number < 0)
        number *= -1;
    while (number > 0) {
        if (number % 10 < min) {
            min = number % 10;
        }
        number /= 10;
    }
    return min;
}
int itc_rev_num(long long number){
    return itc_len_num(itc_reverse_num(number));
}


int itc_null_count(long long number){
    int zeros_cnt = 0;
    if (number == 0)
        return 1;

    if (number < 0)
        number *= -1;
    while (number > 0){
        if (number % 10 == 0)
            zeros_cnt++;
        number /= 10;
    }
    return zeros_cnt;
}

bool itc_mirror_num(long long number){
    return itc_reverse_num(number) == number;
}

int itc_second_max_num(long long number) {
    if (number < 10)
        return -1;
    int max1 = -1, max2 = -1;
    int tmp;
    while (number > 0) {
        tmp = number % 10;
        if (tmp >= max1) {
            max2 = max1;
            max1 = tmp;
        } else if (tmp > max2 && tmp != max1)
            max2 = tmp;
        number /= 10;
    }
    return max2;
}
