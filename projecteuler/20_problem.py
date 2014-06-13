#!/use/bin/python
def jicheng(n):
    if n==1:
        return n
    else :
        return n*jicheng(n-1)
a =  jicheng(100)
m = 0
while a > 0:
    b = a%10
    a = a/10
    m += b
print m
