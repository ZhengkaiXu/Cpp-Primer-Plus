//
// Created by ZhengkaiXu on 2024/8/5.
//
// strngbad.h -- flawed string class definition
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad {
private:
    char *str; // pointer to string
    int len; // length of string
    static int num_strings; // number of object
public:
    StringBad(const char *s); // constructor
    StringBad(); // default constructor
    ~StringBad(); // destructor
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif
