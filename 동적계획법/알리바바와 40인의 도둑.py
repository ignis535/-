"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(n)]

    for j in range(1, n):
        arr[0][j] += arr[0][j - 1]

    for i in range(1, n):
        arr[i][0] += arr[i - 1][0]

    for i in range(1, n):
        for j in range(1, n):
            if arr[i - 1][j] < arr[i][j - 1]:
                arr[i][j] += arr[i - 1][j]
            else:
                arr[i][j] += arr[i][j - 1]

    print(arr[n - 1][n - 1])

import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(n)]

    for i in range(n - 2, -1, -1):
        arr[i][n - 1] += arr[i + 1][n - 1]
        arr[n - 1][i] += arr[n - 1][i + 1]

    for i in range(n - 2, -1, -1):
        for j in range(n - 2, -1, -1):
            if arr[i][j + 1] < arr[i + 1][j]:
                arr[i][j] += arr[i][j + 1]
            else:
                arr[i][j] += arr[i + 1][j]

    print(arr[0][0])
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(i, j):
    if memo[i][j] != 0:
        return memo[i][j]
    if i == 0 and j == 0:
        return arr[0][0]
    else:
        if i == 0:
            memo[i][j] = dfs(i, j - 1) + arr[i][j]
        elif j == 0:
            memo[i][j] = dfs(i - 1, j) + arr[i][j]
        else:
            memo[i][j] = min(dfs(i - 1, j), dfs(i, j - 1)) + arr[i][j]

        return memo[i][j]

if __name__ == "__main__":
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(n)]
    memo = [[0] * n for _ in range(n)]

    print(dfs(n - 1, n - 1))
    
