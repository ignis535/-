import sys
# sys.stdin = open("input.txt", "r")

n, m = map(int, input().split())
dvd = list(map(int, input().split()))
maximum = max(dvd)

def count(capacity):
    cnt = 1
    tot = 0
    for x in dvd:
        if tot + x > capacity:
            cnt += 1
            tot = x
        else:
            tot += x
    return cnt

left = 1
right = sum(dvd)
result = 0
while left <= right:
    pivot = (left + right) // 2
    if pivot >= maximum and count(pivot) <= m:
        result = pivot
        right = pivot - 1
    else:
        left = pivot + 1
print(result)