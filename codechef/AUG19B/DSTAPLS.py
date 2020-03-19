import math

tt = int(input())
for _ in range(tt):
    n, k = input().split(' ')
    n = int(n)
    k = int(k)
    if (n % (k**2) == 0):
        print("NO")
    else:
        print("YES")
