"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    farm = [list(map(int, input().split())) for _ in range(n)]
    
    start = n // 2
    end = start + 1
    sum = 0
    for i in range(n):
        for j in range(start, end):
            sum += farm[i][j]
        if i < n // 2:
            start -= 1
            end += 1
        else:
            start += 1
            end -= 1
    print(sum)
"""
import sys
from collections import deque
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    farm = [list(map(int, input().split())) for _ in range(n)]
    check = [[0] * n for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    queue = deque()
    queue.append((n // 2, n // 2))
    check[n // 2][n // 2] = 1
    sum = farm[n // 2][n // 2]
    level = 0
    while True:
        if level == n // 2: break

        size = len(queue)
        for i in range(size):
            tmp = queue.popleft()
            for j in range(4):
                x = tmp[0] + dx[j]
                y = tmp[1] + dy[j]
                if check[x][y] == 0:
                    check[x][y] = 1
                    sum += farm[x][y]
                    queue.append((x, y))
        level += 1
    print(sum)