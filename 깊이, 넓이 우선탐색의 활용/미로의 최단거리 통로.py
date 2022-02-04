"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    map = [list(map(int, input().split())) for _ in range(7)]

    queue = deque()
    queue.append((0, 0))
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    level = 0
    isFind = False
    while len(queue) != 0:
        size = len(queue)
        for i in range(size):
            tmp = queue.popleft()
            if tmp == (6, 6):
                isFind = True
                break
            for j in range(4):
                x = tmp[0] + dx[j]
                y = tmp[1] + dy[j]
                if 0 <= x <= 6 and \
                    0 <= y <= 6 and \
                    map[x][y] == 0:
                    map[x][y] = 1
                    queue.append((x, y))
        if isFind: break
        level += 1
    if isFind:
        print(level)
    else:
        print(-1)
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    board = [list(map(int, input().split())) for _ in range(7)]
    distance = [[0] * 7 for _ in range(7)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    queue = deque()
    queue.append((0, 0))
    distance[0][0] = 0
    while queue:
        tmp = queue.popleft()
        for i in range(4):
            x = tmp[0] + dx[i]
            y = tmp[1] + dy[i]
            if 0 <= x <= 6 and 0 <= y <= 6 and board[x][y] == 0:
                board[x][y] = 1
                distance[x][y] = distance[tmp[0]][tmp[1]] + 1
                queue.append((x, y))

    if distance[6][6] == 0:
        print(-1)
    else:
        print(distance[6][6])