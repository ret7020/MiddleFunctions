//
// Created by Sch1561-it-25 on 19.09.2022.
//
#include "middle.h"
#include <iostream>

void itc_num_print(int number){
    std::cout << number;
}

int itc_len_num(long long number){
    int cnt = 0;
    while (number > 9){
        number /= 10;
        cnt++;
    }
    return cnt + 1;
}

int itc_sum_num(long long number){
    int sm = 0;
    while (number > 9){
        sm += number % 10;
        number /= 10;
    }
    return sm + number;
}
long long itc_multi_num(long long number){
    int sm = 1;
    while (number > 9){
        sm *= number % 10;
        number /= 10;
    }
    return sm * number;

}
int itc_max_num(long long number){
    int max = -1;
    while (number > 9){
        if (number % 10 > max)
            max = number % 10;
        number /= 10;
    }
    return max;
}
int itc_min_num(long long number){
    int min = 10;
    while (number > 9){
        if (number % 10 < min)
            min = number % 10;
        number /= 10;
    }
    return min;
}
int itc_rev_num(long long number){
    int num = 0;
    while (number > 0){
        num = num * 10 + number % 10;
        number /= 10;
    }
    return num;
}
int itc_null_count(long long number){
    int zeros_cnt = 0;
    while (number > 0){
        if (number % 10 == 0)
            zeros_cnt++;
        number /= 10;
    }
    return zeros_cnt;
}

bool itc_mirror_num(long long number){
    int rev = itc_rev_num(number);
    return rev == number;
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
    return itc_rev_num(t) / 10;
}

long long itc_oct_num(long long number){
    long long t = 1;
    while(number)
    {
        t *= 10;
        t += (number % 8);
        number /= 8;
    }
    return itc_rev_num(t) / 10;
}


int itc_rev_bin_num(long long number){
    int res = 0, counter = 0;
    while (number > 0){
        res += counter * number;
        counter ++;
    }
}