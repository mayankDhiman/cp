tt = int(input())
for _ in range(tt):
    n = int(input())
    k = int(input())
    (print(2*min([k%n, n - k%n]) - 1)) if (k%n == n - k%n) else (print(2*min([k%n, n - k%n])))