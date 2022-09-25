//
// Created by stephan on 9/25/22.
//
#include "middle.h"


int itc_rev_oct_num(long long number){
    long long res = 0, degree_mutiplier = 0;
    while (number > 0){
        res += number % 10 * itc_pow(8, degree_mutiplier);
        degree_mutiplier++;
        number /= 10;
    }
    return res;
}
int itc_covert_num(long long number, int ss){
    long long t = 1;
    while(number)
    {
        t *= 10;
        t += (number % ss);
        number /= ss;
    }
    return itc_rev_num(t) / 10;

}
int itc_rev_covert_num(long long number, int ss){
    long long res = 0, degree_mutiplier = 0;
    while (number > 0){
        res += number % 10 * itc_pow(ss, degree_mutiplier);
        degree_mutiplier++;
        number /= 10;
    }
    return res;

}