"""
import sys
# sys.stdin = open("input.txt", "r")

n, m = map(int, input().split())
weight = list(map(int, input().split()))
weight.sort()

left = 0
right = n - 1
cnt = 0
while left <= right:
    if weight[left] + weight[right] <= m:
        cnt += 1
        left += 1
        right -= 1
    else:
        cnt += 1
        right -= 1
print(cnt)
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", "r")

n, limit = map(int, input().split())
weight = list(map(int, input().split()))
weight.sort()
weight = deque(weight)

cnt = 0
while weight:
    if len(weight) == 1:
        cnt += 1
        break
    if weight[0] + weight[-1] <= limit:
        weight.popleft()
        weight.pop()
        cnt += 1
    else:
        weight.pop()
        cnt += 1
print(cnt)