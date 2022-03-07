import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level):
    global cnt
    if level == m:
        for i in range(m):
            print(result[i], end = ' ')
        print()
        cnt += 1
    else:
        for i in range(1, n + 1):
            if check[i] == 0:
                check[i] = 1
                result[level] = i
                dfs(level + 1)
                check[i] = 0

if __name__ == "__main__":
    n, m = map(int, input().split())
    result = [0] * m
    check = [0] * (n + 1)
    cnt = 0
    dfs(0)
    print(cnt)