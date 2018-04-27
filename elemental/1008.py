#!/usr/bin/env python
# -*- coding:utf-8 -*-
# Filename: 1008.py
# Author: Lv Feng
# E-mail: lvfeng97@outlook.com
# Date: 2018-04-26
# Description:
Ns, Ps = input().split()

N = int(Ns)
P = int(Ps)

S = 1;
for i in range(2, N+1) :
    S = S * i

S = S % P
print (S)
