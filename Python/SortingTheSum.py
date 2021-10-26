##Lets make the Process of Summing more Easy by just Sorting the Order of Digits taken as String INput to Sum them Up.

# -*- coding: utf-8 -*-
"""
Created on Fri Oct 22 16:49:24 2021
 
@author: Nikhil Singh
"""

s=input()
a=[]
for i in range(len(s)):
    a.append(s[i])


num=[]

i=0
while i<(len(a)):

    if a[i].isdigit():
        num.append(a[i])
    i+=1

num.sort()
i=0
for i in range(len(num)-1):
    print(str(num[i])+str('+'), end='')
    i+=1
print(num[len(num)-1])
