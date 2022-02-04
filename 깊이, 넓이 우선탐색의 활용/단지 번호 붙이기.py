import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j):
    global local_cnt
    for k in range(4):
        x = i + dx[k]
        y = j + dy[k]
        if 0 <= x < n and \
           0 <= y < n and \
           board[x][y] == 1:
            board[x][y] = 0
            local_cnt += 1
            dfs(x, y)

if __name__ == "__main__":
    n = int(input())
    board = [list(map(int, input())) for _ in range(n)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    tot_cnt = 0
    local_cnt = 1
    result = []
    for i in range(n):
        for j in range(n):
            if board[i][j] == 1:
                board[i][j] = 0
                dfs(i, j)
                tot_cnt += 1
                result.append(local_cnt)
                local_cnt = 1
    print(tot_cnt)
    result.sort()
    for x in result:
        print(x)