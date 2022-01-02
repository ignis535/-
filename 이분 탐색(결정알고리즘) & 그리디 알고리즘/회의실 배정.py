import sys
# sys.stdin = open("input.txt", "r")

n = int(input())
conf = [list(map(int, input().split())) for _ in range(n)]
conf.sort(key = lambda x : (x[1], x[0]))

cnt = 0
pivot = 0
for start, end in conf:
    if pivot <= start:
        cnt += 1
        pivot = end
print(cnt)
    