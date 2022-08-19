l=[1,2,3,4,5,6]
big=l[1]
secondbig=l[0]
for i in range(0,len(l)):
    if(big<l[i]):
        secondbig=big
        big=l[i]
print(secondbig)

