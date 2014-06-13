#/usr/bin/python
def Fibonacci():
    l = [1,1,2]    
    while True:
        m = l[2]
        x = (l[2]+ l[1])
        l[1] = m
        yield x
        l[2] = x
i = 3  
for x in Fibonacci(): 
    i += 1
    if len(str(x))==1000:
        print i
        break;
    


