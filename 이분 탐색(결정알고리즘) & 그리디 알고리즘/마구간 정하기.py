import sys
# sys.stdin = open("input.txt", "r")

n, c = map(int, input().split())
house = [int(input()) for _ in range(n)]
house.sort()

def count(pivot):
    cnt = 0
    pre = -pivot
    for x in house:
        if x - pre >= pivot:
            cnt += 1
            pre = x
    return cnt

left = 0
right = house[-1]
result = 0
while left <= right:
    pivot = (left + right) // 2
    if count(pivot) >= c:
        left = pivot + 1
        result = pivot
    else:
        right = pivot - 1
print(result)
