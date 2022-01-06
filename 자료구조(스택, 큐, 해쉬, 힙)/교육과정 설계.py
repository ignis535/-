"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

must = input()
n = int(input())

for i in range(1, n + 1):
    course = input()
    queue = deque()
    for x in course:
        if x in must and x not in queue:
            queue.append(x)
    if len(queue) != len(must): 
        print(f"#{i} NO")
        continue
    for x in must:
        tmp = queue.popleft()
        if tmp != x: 
            print(f"#{i} NO")
            break
    else:
        print(f"#{i} YES")
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

must = input()
n = int(input())

for i in range(n):
    course = input()
    need = deque(must)
    for x in course:
        if x in need:
            if x != need.popleft():
                print(f"#{i + 1} NO")
                break
    else:
        if len(need) == 0:
            print(f"#{i + 1} YES")
        else:
            print(f"#{i + 1} NO")

    