"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    m, n = map(int, input().split())
    tomato = [list(map(int, input().split())) for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    queue = deque()
    zero_cnt = 0
    for i in range(n):
        for j in range(m):
            if tomato[i][j] == 1:
                queue.append((i, j))
            elif tomato[i][j] == 0:
                zero_cnt += 1

    if zero_cnt == 0:
        print(0)
    else:
        level = 0
        while queue:
            size = len(queue)
            for i in range(size):
                tmp = queue.popleft()
                for j in range(4):
                    x = tmp[0] + dx[j]
                    y = tmp[1] + dy[j]
                    if 0 <= x < n and \
                        0 <= y < m and \
                        tomato[x][y] == 0:
                        tomato[x][y] = 1
                        zero_cnt -= 1
                        queue.append((x, y)) 
            level += 1
        if zero_cnt == 0:
            print(level - 1)
        else:
            print(-1)
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    m, n = map(int, input().split())
    tomato = [list(map(int, input().split())) for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    queue = deque()
    for i in range(n):
        for j in range(m):
            if tomato[i][j] == 1:
                queue.append((i, j))

    distance = [[0] * m for _ in range(n)]
    while queue:
        tmp = queue.popleft()
        for i in range(4):
            x = tmp[0] + dx[i]
            y = tmp[1] + dy[i]
            if 0 <= x < n and \
               0 <= y < m and \
               tomato[x][y] == 0:
                tomato[x][y] = 1
                distance[x][y] = distance[tmp[0]][tmp[1]] + 1
                queue.append((x, y))

    isImpossible = False
    for i in range(n):
        for j in range(m):
            if tomato[i][j] == 0:
                isImpossible = True

    if isImpossible:
        print(-1)
    else:
        print(max(map(max, distance)))
    