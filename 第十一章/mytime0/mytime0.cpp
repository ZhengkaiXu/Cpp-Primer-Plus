//
// Created by ZhengkaiXu on 2024/5/26.
//
// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime0.h"

Time::Time() {
    hours = minutes = 0;
}
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}