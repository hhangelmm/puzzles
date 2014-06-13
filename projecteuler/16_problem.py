#!/usr/bin/python
a = 2**1000
n = 0
while a>0:
    b = a%10
    n += b
    a = a/10
print n
