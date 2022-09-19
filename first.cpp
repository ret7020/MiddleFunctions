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

int itc_second_max_num(long long number){
    int first_max = -1, second_max = -1;
    while (number > 0){
        if (number % 10 > first_max)
            first_max = number % 10;
        if (number % 10 <= first_max && number % 10 > second_max)
            second_max = number % 10;
        number /= 10;
    }
    return second_max;
}