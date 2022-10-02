//
// Created by stephan on 9/25/22.
//
#include "middle.h"

int itc_second_simple_max_num(long long number) {
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
    if (max1 == max2)
        return -1;
    return max2;
}

long long itc_bin_num(long long number){
    long long t = 1;
    while(number)
    {
        t *= 10;
        t += (number % 2);
        number /= 2;
    }
    return itc_reverse_num(t) / 10;
}

long long itc_oct_num(long long number){
    long long t = 1;
    while(number)
    {
        t *= 10;
        t += (number % 8);
        number /= 8;
    }
    return itc_reverse_num(t) / 10;
}

double itc_pow(int num, int step) {
    double res = 1;
    long long tmp_step;
    if (step < 0)
        tmp_step = -1 * step;
    else
        tmp_step = step;

    for (long long i = 0; i < tmp_step; ++i)
        res *= num;

    if (step < 0)
        res = 1 / res;
    return res;
}


int itc_rev_bin_num(long long number){
    long long res = 0, degree_mutiplier = 0;
    while (number > 0){
        res += number % 10 * itc_pow(2, degree_mutiplier);
        degree_mutiplier++;
        number /= 10;
    }
    return res;
}