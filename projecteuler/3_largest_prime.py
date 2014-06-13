#!/usr/bin/python
import math
def is_prime(x):
    i=2
    while(i<math.sqrt(x)):
        if(x%i==0):
            return False
        i +=1
    return True
def main():
    a=600851475143
    b=1
    c=0
    while(b<math.sqrt(a)):
        b += 1
        if(a%b==0):
            m=a/b
            if(is_prime(b)):
                c = b;
            if(is_prime(m)):
                c = m;
    print c;
main()


