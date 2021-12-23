import sys
# sys.stdin = open("input.txt", "rt")

n, m = map(int, input().split())
check = [0] * (n + m + 1)

for i in range(1, n + 1):
    for j in range(1, m + 1):
        check[i + j] += 1

maximum = max(check)
for idx, element in enumerate(check):
    if element == maximum:
        print(idx, end = " ")