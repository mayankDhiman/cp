import math
import collections

def conv(x):
    if (x >= "0") and (x <= "9"):
        return int(x)         
    else:
        return (ord(x[0]) - ord('A') + 10)
t = int(input())
for _ in range(t):
    n = int(input())
    val = [[] for i in range(n)]
    for i in range(n):
        x, y = input().split(' ')
        x = int(x)
        if x == -1:
            for b in range(2, 37):
                o1 = True
                for _i in y:
                    if conv(_i) >= b:
                        o1 = False
                if o1:
                    res = int(y, b)
                if o1:
                    if  res <= 1000000000000:
                        val[i].append(res)
        else:
            res = int(y, x)
            if res <= 1000000000000:
                val[i].append(res)
    count = {}
    for ls in val:
        ls = sorted(list(set(ls)))
    for i in range(len(val)):
        for j in range(len(val[i])):
            if val[i][j] in count:
                count[val[i][j]] = count[val[i][j]] + 1
            else:
                count[val[i][j]] = 1
    _count = collections.OrderedDict(sorted(count.items()))
    ans = []
    for i in _count:
        if _count[i] == n:
            ans.append(i)
    if len(ans) == 0:
        print(-1)
    else:
        ans = sorted(ans)
        print(ans[0])