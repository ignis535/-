"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level):
    global cnt
    if level == m:
        cnt += 1
        for i in range(m):
            print(result[i], end = ' ')
        print()
    else:
        for i in range(n, -1, -1):
            if check[i] == 1:
                start = i
                break
        else:
            start = 1
        for i in range(start, n + 1):
            if check[i] == 0:
                check[i] = 1
                result[level] = i
                dfs(level + 1)
                check[i] = 0

if __name__ == "__main__":
    n, m = map(int, input().split())
    check = [0] * (n + 1)
    result = [0] * m
    cnt = 0
    dfs(0)
    print(cnt)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, start):
    global cnt
    if level == m:
        for i in range(m):
            print(result[i], end = ' ')
        print()
        cnt += 1
    else:
        for i in range(start, n + 1):
            result[level] = i
            dfs(level + 1, i + 1)

if __name__ == "__main__":
    n, m = map(int, input().split())
    cnt = 0
    result = [0] * m
    dfs(0, 1)
    print(cnt)