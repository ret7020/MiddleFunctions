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
    int max = itc_max_num(number);
    int second_max = 0;
    if(number < 0)
        number = -number;
    if (number < 10)
        return -1;
    while(number>0){
        if(second_max < number % 10 && number % 10 != max)
            second_max = number % 10;
        if(number % 10 == max)
            max = 10;
        number = number / 10;
    }
    return second_max;
}
