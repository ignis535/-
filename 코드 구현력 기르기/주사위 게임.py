import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())

max = -2147000000
for _ in range(n):
    tmp = list(map(int, input().split()))
    tmp.sort()
    a, b, c = tmp
    if a == b and b == c:
        money = 10000 + a * 1000
    elif a == b:
        money = 1000 + a * 100
    elif b == c:
        money = 1000 + b * 100
    else:
        money = c * 100
    if money > max:
        max = money
print(max)