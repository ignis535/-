import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    s, e = map(int, input().split())
    MAX = 10000
    check = [0] * (MAX + 1)
    distance = [0] * (MAX + 1)
    queue = deque()
    queue.append(s)
    check[s] = 1
    distance[s] = 0
    while queue:
        now = queue.popleft()
        if now == e: break
        for next in (now - 1, now + 1, now + 5):
            if 1 <= next <= MAX:
                if check[next] == 0:
                    check[next] = 1
                    distance[next] = distance[now] + 1
                    queue.append(next)
    print(distance[e])
        

