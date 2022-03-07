import sys
# sys.stdin = open("input.txt", 'r')
sys.setrecursionlimit(10 ** 6)

def dfs(i, j):
    check[i][j] = 1
    for k in range(4):
        x = i + dx[k]
        y = j + dy[k]
        if 0 <= x < n and \
           0 <= y < n and \
           check[x][y] == 0 and \
           board[x][y] > height:
            dfs(x, y)


if __name__ == "__main__":
    n = int(input())
    board = [list(map(int, input().split())) for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    result = 0
    for height in range(max(map(max, board))):
        check = [[0] * n for _ in range(n)]
        cnt = 0
        for i in range(n):
            for j in range(n):
                if check[i][j] == 0 and board[i][j] > height:
                    dfs(i, j)
                    cnt += 1
        result = max(result, cnt)
    print(result)
        