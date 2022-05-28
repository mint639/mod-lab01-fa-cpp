// Copyright 2022 UNN-IASR
#include "fun.h"
#include <stdio.h>

int main() {
    const char* str_1 = "qwe4  gftt e 555gr rrgr  grhh ";
    const char* str_2 = "  qwe4 ";
    const char* str_3 = "Hello, world!";
    const char* str_4 = "Hello world!";
    const char* str_5 = " bad dog ";
    const char* str_6 = " six monkeys";
    printf("First func example input=(qwe4  gftt e 555gr rrgr  grhh ) output=%d\n", faStr1(str_1));
    printf("First func example input=(  qwe4 ) output=%d\n", faStr1(str_2));
    printf("Second func example input=(Hello, world!) output=%d\n", faStr2(str_3));
    printf("Second func example input=(Hello world!) output=%d\n", faStr2(str_4));
    printf("Second func example input=( bad dog ) output=%d\n", faStr3(str_5));
    printf("Second func example input=( six monkeys) output=%d\n", faStr3(str_6));
    return 0;
}
