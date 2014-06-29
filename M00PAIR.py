a=[]
a.append(0)
a.append(1)
for i in range(2,1001):
    a.append(a[i-1]+2*a[i-2])
while 1:
    try:
        n=int(raw_input())
        print a[n-1]
    except:
        break
