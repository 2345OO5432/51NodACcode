#!/usr/bin/env python3
# -*- coding:utf-8 -*-
# Filename: 1057.py
# Author: Lv Feng
# E-mail: lvfeng97@outlook.com
# Date: 2018-04-27
# Description:

def fac( n ) :
    result = 1
    for i in range(1, n + 1) :
        result = result *i
    return result

if __name__ == "__main__" :
    a = input()
    print(fac(int(a)))
