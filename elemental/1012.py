#!/usr/bin/env python3
# -*- coding:utf-8 -*-
# Filename: 1012.py
# Author: Lv Feng
# E-mail: lvfeng97@outlook.com
# Date: 2018-04-26
# Description:
def lcm() :
    a, b = input().split()
    ia, ib = int(a), int(b)
    if ia < ib :
        ia, ib = ib, ia
    d = ia % ib
    while d :
        ia = ib
        ib = d
        d = ia % ib

    print (int(int(a)*int(b) / ib))

if __name__ == '__main__' :
    lcm()

