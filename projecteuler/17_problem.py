#!/usr/bin/python
import math
arr1 = ("", "thousand","million","billion")
arr2 = ("zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety")
arr3 = ("zero","one","two","three","four","five","six","seven","eight","nine")
arr4 = ("ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen")
def Translate(num):
    lenth=len(num)
    i=j=0
    strRet=""
    cols=int(math.ceil(float(lenth)/3))
    first=lenth-cols*3
    strRet=""
    for i in xrange(first,lenth,3):
        j += 1
        if(i>=0):
            num3=num[i:i+3]
        else:
            num3=num[0:first+3]
        strEng=English(num3)
        if(strEng!=""):
            if(strRet!=""):
                strRet+="" 
            strRet+=English(num3)+arr1[cols-j]
    return strRet
        
def English(num):
    strRet=""
    if((len(num)==3) and (num[0:2]!="000")):
        if((num[0]!="0")):
            i = int(num[0])
            strRet+=arr3[i]+"hundred"
            if(num[1:]!="00"):
                strRet+="and"
        num=num[1:]
    if((len(num)==2)):
        if((num[0]=="0")):
            num=num[1]
        elif((num[0]=="1")):
            i = int(num[1])
            strRet+=arr4[i]
        else :
            i = int(num[0])
            strRet+=arr2[i]
            if(num[1]!="0"):
                strRet+=""
                num=num[1]
    if((len(num)==1) and (num[0]!="0")):
        i = int(num[0])
        strRet+=arr3[i]
    return strRet
total = 0;
for x in xrange(1,1001):
    m = Translate(str(x))
    total +=len(m);
print total
