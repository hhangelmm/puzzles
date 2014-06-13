#!/usr/bin/python
import math
def is_prime(x):
    i=2
    if(x==0 or x==1 ):
        return False
    if(x==2 or  x==3 or x==5):
        return True
    while i<=math.sqrt(x):
        if x%i==0:
            return False
        i +=1
    return True
n = 0
for j in xrange(2000000):
    if is_prime(j):
        n += j
        print j;
print n
