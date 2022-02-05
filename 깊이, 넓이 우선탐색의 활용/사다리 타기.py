"""import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j):
    global isFind
    if isFind == True: return

    if i == 0:
        print(j)
        isFind = True
    else:
        for k in range(3):
            x = i + dx[k]
            y = j + dy[k]
            if 0 <= x < 10 and \
               0 <= y < 10 and \
               board[x][y] == 1 and \
               check[x][y] == 0:
                check[x][y] = 1
                dfs(x, y)
                check[x][y] = 0

if __name__ == "__main__":
    board = [list(map(int, input().split())) for _ in range(10)]
    check = [[0] * 10 for _ in range(10)]
    dx = [0, 0, -1]
    dy = [-1, 1, 0]

    isFind = False
    for i in range(10):
        for j in range(10):
            if board[i][j] == 2:
                dfs(i, j)
                break
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j):
    check[i][j] = 1
    if i == 0:
        print(j)
    else:
        if j - 1 >= 0 and board[i][j - 1] == 1 and check[i][j - 1] == 0:
            dfs(i, j - 1)
        elif j + 1 <= 9 and board[i][j + 1] == 1 and check[i][j + 1] == 0:
            dfs(i, j + 1)
        else:
            dfs(i - 1, j)

if __name__ == "__main__":
    board = [list(map(int, input().split())) for _ in range(10)]
    check = [[0] * 10 for _ in range(10)]
    for j in range(10):
        if board[9][j] == 2:
            dfs(9, j)
            break