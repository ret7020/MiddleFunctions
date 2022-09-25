//
// Created by stephan on 9/25/22.
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