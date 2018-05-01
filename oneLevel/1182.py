#!/usr/bin/env python3
# -*- coding:utf-8 -*-
# Filename: 1182.py
# Author: Lv Feng
# E-mail: lvfeng97@outlook.com
# Date: 2018-05-01
# Description:
import string
def maxV() :
    s = input()
    s = s.lower()
    l = [s.count(i) for i in  string.ascii_lowercase[:]]
    l.sort()
    sumV = 0
    price = 26
    for i in range(len(l)-1, -1, -1) :
        if l[i] == 0 :
            break
        else :
            sumV = sumV + price * l[i]
            price = price - 1
    return sumV
if __name__ == '__main__':
    value = maxV()
    print(value)


