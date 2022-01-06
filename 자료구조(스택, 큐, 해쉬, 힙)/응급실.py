"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

n, m = map(int, input().split())
danger = deque(enumerate(map(int, input().split())))

cnt = 0
while True:
    for i in range(1, len(danger)):
        if danger[0][1] < danger[i][1]:
            tmp = danger.popleft()
            danger.append(tmp)
            break
    else:
        tmp = danger.popleft()
        cnt += 1
        if tmp[0] == m: break
        
print(cnt)
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

n, m = map(int, input().split())
danger = list(map(int, input().split()))
danger = [(order, val) for order, val in enumerate(danger)]
danger = deque(danger)

cnt = 0
while True:
    pivot = danger.popleft()
    if any(pivot[1] < x[1] for x in danger):
        danger.append(pivot)
    else:
        cnt += 1
        if pivot[0] == m:
            print(cnt)
            break

