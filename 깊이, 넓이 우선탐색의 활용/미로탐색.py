import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j):
    global cnt
    if i == 6 and j == 6:
        cnt += 1
    else:
        for k in range(4):
            x = i + dx[k]
            y = j + dy[k]
            if 0 <= x <= 6 and \
               0 <= y <= 6 and \
               board[x][y] == 0:
                board[x][y] = 1
                dfs(x, y)
                board[x][y] = 0

if __name__ == "__main__":
    board = [list(map(int, input().split())) for _ in range(7)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    cnt = 0
    board[0][0] = 1
    dfs(0, 0)
    print(cnt)
