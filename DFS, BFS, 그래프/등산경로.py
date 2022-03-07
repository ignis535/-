import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j, height):
    global cnt
    if height == maximum:
        cnt += 1
    else:
        for k in range(4):
            x = i + dx[k]
            y = j + dy[k]
            if 0 <= x < n and \
               0 <= y < n and \
               check[x][y] == 0 and \
               height < board[x][y]:
                check[x][y] = 1
                dfs(x, y, board[x][y])
                check[x][y] = 0

if __name__ == "__main__":
    n = int(input())
    board = [list(map(int, input().split())) for _ in range(n)]
    check = [[0] * n for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    cnt = 0
    maximum = -2147000000
    minimum = 2147000000
    start_i = 0
    start_j = 0
    for i in range(n):
        for j in range(n):
            if board[i][j] > maximum:
                maximum = board[i][j]
            if board[i][j] < minimum:
                minimum = board[i][j]
                start_i = i
                start_j = j

    check[start_i][start_j] = 1
    dfs(start_i, start_j, minimum)
    print(cnt)