#!/usr/bin/env python3
# -*- coding:utf-8 -*-
# Filename: 1089.py
# Author: Lv Feng
# E-mail: lvfeng97@outlook.com
# Date: 2018-05-05
# Description:
def manacher(s):
    s='#'+'#'.join(s)+'#'

    RL=[0]*len(s)
    MaxRight=0
    pos=0
    MaxLen=0
    for i in range(len(s)):
        if i<MaxRight :
            RL[i]=min(RL[2*pos-i], MaxRight-i)
        else :
            RL[i]=1
        while i-RL[i]>=0 and i+RL[i]<len(s) and s[i-RL[i]]==s[i+RL[i]]:
            RL[i]+=1
        if RL[i]+i-1>MaxRight:
            MaxRight=RL[i]+i-1
            pos=i
        MaxLen=max(MaxLen, RL[i])
    return MaxLen-1

if __name__ == '__main__' :
    s = input()
    print(manacher(s))

