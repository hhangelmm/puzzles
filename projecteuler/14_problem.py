#!/usr/bin/python
#n = {}
n = 0
m=0
for i in xrange(1000000):
    j = 1
    a = i
    while a > 1:
        if a%2==0:
            a = a/2
        else:
            a = a*3 + 1
        j += 1
    if n<j:
        n=j
        m=i
print m



