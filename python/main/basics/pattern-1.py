# n=int(input("enter a number"))
n=4
for i in range(1,n+1):
    for s in range(n,i,-1):
        print(" ",end=' ')
    for j in range(1,i+1):
        print('*',end=' ')
    for k in range(i-1,0,-1):
        print('*',end=' ')
    print()
for i in range(1,n):
    for s in range(i):
        print(" ",end=' ')
    for j in range(i,n):
        print('*',end=' ')
    for k in range(n-2,i-1,-1):
        print('*',end=' ')
    print()
