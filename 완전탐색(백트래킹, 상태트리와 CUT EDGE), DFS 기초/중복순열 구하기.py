"""
import sys
sys.stdin = open("input.txt", 'r')

def dfs(level, val):
    global cnt
    if level > m and val > 1: return
    if level > m:
        cnt += 1
        for i in range(1, m + 1):
            print(memo[i], end = ' ')
        print()
    else:
        memo[level] = val
        for i in range(1, n + 1):
            memo[level] = val
            dfs(level + 1, i)
        

if __name__ == "__main__":
    n, m = map(int, input().split())
    cnt = 0
    memo = [0] * (n + 1)
    dfs(0, 0)
    print(cnt)
"""
import sys
# sys.stdin = open("input.txt", 'r')
# input = sys.stdin.realine

def dfs(level):
    global cnt
    if level == m:
        cnt += 1
        for i in result:
            print(i, end = ' ')
        print()
    else:
        for val in range(1, n + 1):
            result[level] = val
            dfs(level + 1)

if __name__ == "__main__":
    n, m = map(int, input().split())
    result = [0] * m
    cnt = 0
    dfs(0)
    print(cnt)
