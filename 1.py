for i in range(int(input())):
    n,d=map(int,input().split())
    k=n
    min=10
    while k>0:
        i=k%10
        k=int(k/10)
        if min>i:
            min=i
    print (min)
    if min<d:
        s=str(min)+str(d)*(len(str(n))-1)
        s=int(s)
        if s<n:
            print(s)
        else:
            print(n)
    else:
        s=str(d)*len(str(n))
        s=int(s)
        print(s)