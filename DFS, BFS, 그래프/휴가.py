import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum, day, delay):
    global max
    if level == n:
        if delay == 0:
            if sum > max:
                max = sum
    else:
        if delay == 0:
            dfs(level + 1, sum + consult[level][1], day + consult[level][0], consult[level][0] -1)
            dfs(level + 1, sum, day, delay)
        else:
            dfs(level + 1, sum, day, delay - 1)

if __name__ == "__main__":
    n = int(input())
    consult = [tuple(map(int, input().split())) for _ in range(n)]
    max = 0
    dfs(0, 0, 0, 0)
    print(max)