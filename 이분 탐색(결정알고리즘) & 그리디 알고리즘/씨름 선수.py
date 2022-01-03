import sys
# sys.stdin = open("input.txt", "r")

n = int(input())
body = [tuple(map(int, input().split())) for _ in range(n)]
body.sort(reverse = True, key = lambda x : (x[0], x[1]))

largest = 0
cnt = 0
for height, weight in body:
    if weight >= largest:
       largest = weight
       cnt += 1
print(cnt)