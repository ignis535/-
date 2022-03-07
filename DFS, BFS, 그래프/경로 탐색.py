"""
import sys
sys.stdin = open("input.txt", 'r')

def dfs(level, val):
    global cnt
    if val == n:
        cnt += 1
    else:
        for i in range(1, n + 1):
            if graph[val][i] == 1 and check[i] == 0:
                check[i] = 1
                dfs(val, i)
                check[i] = 0

if __name__ == "__main__":
    n, m = map(int, input().split())
    graph = [[0] * (n + 1) for _ in range(n + 1)]
    for _ in range(m):
        i, j = map(int, input().split())
        graph[i][j] = 1
    cnt = 0
    check = [0] * (n + 1)
    check[1] = 1
    dfs(0, 1)
    print(cnt)
"""
import sys
sys.stdin = open("input.txt", 'r')

def dfs(vertex):
    global cnt
    if vertex == n:
        cnt += 1
        for x in path:
            print(x, end = ' ')
        print()
    else:
        for i in range(1, n + 1):
            if graph[vertex][i] == 1 and check[i] == 0:
                check[i] = 1
                path.append(i)
                dfs(i)
                check[i] = 0
                path.pop()

if __name__ == "__main__":
    n, m = map(int, input().split())
    graph = [[0] * (n + 1) for _ in range(n + 1)]
    for _ in range(m):
        i, j = map(int, input().split())
        graph[i][j] = 1
    path = [1]
    check = [0] * (n + 1)
    check[1] = 1
    cnt = 0
    dfs(1)
    print(cnt)
