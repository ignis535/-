"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, m = map(int, input().split())
    data = [list(map(int, input().split())) for _ in range(m)]
    matrix = [[0 for _ in range(n)] for _ in range(n)]
    for _ in range(m):
        i, j, cost = data[i]
        matrix[i - 1][j - 1] = cost
    for row in matrix:
        for val in row:
            print(val, end = ' ')
        print()
"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, m = map(int, input().split())
    graph = [[0] * (n + 1) for _ in range(n + 1)]

    for _ in range(m):
        i, j, weight = map(int, input().split())
        graph[i][j] = weight

    for i in range(1, n + 1):
        for j in range(1, n + 1):
            print(graph[i][j], end = ' ')
        print()