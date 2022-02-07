"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    dis = [[5000] * (n + 1) for _ in range(n + 1)]
    
    for i in range(1, n + 1):
        dis[i][i] = 0

    while True:
        i, j = map(int, input().split())
        if i == -1 and j == -1:
            break

        dis[i][j] = dis[j][i] = 1

    for k in range(1, n + 1):
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j])

    minimum = 2147000000
    for i in range(1, n + 1):
        max = 0
        for j in range(1, n + 1):
            if dis[i][j] > max:
                max = dis[i][j]
        if max < minimum:
            minimum = max

    cnt = 0
    candidate = []
    for i in range(1, n + 1):
        max = 0
        for j in range(1, n + 1):
            if dis[i][j] > max:
                max = dis[i][j]
        if minimum == max:
            cnt += 1
            candidate.append(i)

    print(minimum, cnt)
    print(' '.join(map(str, candidate)))
"""

import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    dis = [[1000] * (n + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        dis[i][i] = 0

    while True:
        i, j = map(int, input().split())
        if i == -1 and j == -1: break

        dis[i][j] = dis[j][i] = 1

    for k in range(1, n + 1):
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j])

    result = [0] * (n + 1)
    score = 2147000000
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            result[i] = max(result[i], dis[i][j])
        score = min(score, result[i])
    
    out = []
    for i in range(len(result)):
        if result[i] == score:
            out.append(i)

    print(score, len(out))
    print(' '.join(map(str, out)))