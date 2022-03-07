import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, start):
    global result
    if level == m:
        sum = 0
        for i in range(len(house)):
            tmp = 2147000000
            for j in combination:
               tmp = min(tmp, abs(house[i][0] - pizza[j][0]) + abs(house[i][1] - pizza[j][1])) 
            sum += tmp
        if sum < result:
            result = sum
    else:
        for i in range(start, len(pizza)):
            combination[level] = i
            dfs(level + 1, i + 1)

if __name__ == "__main__":
    n, m = map(int, input().split())
    board = [list(map(int, input().split())) for _ in range(n)]

    house = []
    pizza = []
    for i in range(n):
        for j in range(n):
            if board[i][j] == 1:
                house.append((i, j))
            if board[i][j] == 2:
                pizza.append((i, j))
    result = 2147000000
    combination = [0] * m
    dfs(0, 0)
    print(result)