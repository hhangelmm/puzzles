#!/usr/local/python
lst = {}
for i in xrange(1,10000):
    sum1 = 0
    for j in xrange(1,i):
        if (i%j==0):
            sum1 += j
    lst[i] = sum1
sum2 = 0
for i in xrange(1,10000):
    if (lst[i] in lst) and (i == lst[lst[i]]) and (i!=lst[i]):
        sum2 += i;
print sum2
