#!/usr/bin/python
import pprint
m = 0
l = 0
triangle = {}
for line in open('18_problem.txt'):
    l += 1
    s = line
    s = s.strip('\n')
    n = s.split(' ')
    for i in xrange(len(n)):
        n[i] = int(n[i])    
    triangle[l] = n
pprint.pprint (triangle)
x=1
y=0
total = 0
while True:
    total +=triangle[x][y]

