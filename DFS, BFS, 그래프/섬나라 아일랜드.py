import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

def bfs(i, j):
    queue.append((i, j))
    while queue:
        tmp = queue.popleft()
        board[tmp[0]][tmp[1]] = 0
        for k in range(8):
            x = tmp[0] + dx[k]
            y = tmp[1] + dy[k]
            if 0 <= x < n and \
               0 <= y < n and \
               board[x][y] == 1:
                queue.append((x, y))

if __name__ == "__main__":
    n = int(input())
    board = [list(map(int, input().split())) for _ in range(n)]
    dx = [-1, -1, 0, 1, 1, 1, 0, - 1]
    dy = [0, 1, 1, 1, 0, -1, -1, -1]

    cnt = 0
    queue = deque()
    for i in range(n):
        for j in range(n):
            if board[i][j] == 1:
                bfs(i, j)
                cnt += 1
    print(cnt)