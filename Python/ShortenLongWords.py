## A python Programme for the problem

# -*- coding: utf-8 -*-
"""
Created on Fri Oct 22 16:34:18 2021
 
@author: Nikhil Singh
"""

n=int(input())
x=[]
for i in range(n):
   x.append(str(input()))

j=0
while j<n:
    if len(str(x[j]))>10:
        print((x[j][0])+str(len(x[j])-(2))+(x[j][int(len(x[j])-1)]))
    else:
        print(x[j])
    j+=1
