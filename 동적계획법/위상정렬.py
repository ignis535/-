import sys
from collections import deque
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    n, m = map(int, input().split())
    dis = [[0] * (n + 1) for _ in range(n + 1)]

    degree = [0] * (n + 1)
    for _ in range(m):
        i, j = map(int, input().split())
        dis[i][j] = 1
        degree[j] += 1

    queue = deque()
    for i in range(1, n + 1):
        if degree[i] == 0:
            queue.append(i)

    while queue:
        tmp = queue.popleft()
        print(tmp, end = ' ')
        for i in range(1, n + 1):
            if dis[tmp][i] == 1:
                degree[i] -= 1
                if degree[i] == 0:
                    queue.append(i)
