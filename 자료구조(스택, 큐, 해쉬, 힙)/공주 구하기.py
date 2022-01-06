"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

n, k = map(int, input().split())
queue = deque(range(1, n + 1))

cnt = 1
while len(queue) != 1:
    if cnt % k == 0:
        queue.popleft()
    else:
        tmp = queue.popleft()
        queue.append(tmp)
    cnt += 1
print(queue[0])
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

n, k = map(int, input().split())
queue = deque(range(1, n + 1))

while queue:
    if len(queue) == 1: break

    for _ in range(k - 1):
        tmp = queue.popleft()
        queue.append(tmp)
    queue.popleft()
print(queue[0])