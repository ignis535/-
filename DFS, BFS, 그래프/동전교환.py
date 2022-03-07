import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    global min
    if sum > m: 
        return
    elif sum == m:
        if level < min:
            min = level
    else:
        for i in range(n):
            dfs(level + 1, sum + coin[i])

if __name__ == "__main__":
    n = int(input())
    coin = list(map(int, input().split()))
    coin.sort(reverse = True)
    m = int(input())
    min = 2147000000
    dfs(0, 0)
    print(min)

