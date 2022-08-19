l=[1,2,2,2,1,1,1]
small=l[0];c=0
for i in range(0,len(l)):
    if(small>=l[i]):
        if(small==l[i]):
            c=c+1
        else:
            c=1
        small=l[i]
print("count of small",c)
print("small in list is",small)
