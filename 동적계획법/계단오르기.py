import sys
# sys.stdin = open("input.txt", 'r')

def dfs(n):
    if memo[n] != 0:
        return memo[n]

    if n == 1 or n == 2:
        return n
    else:
        memo[n] = dfs(n - 1) + dfs(n - 2)
        return memo[n]

if __name__ == "__main__":
    n = int(input())
    memo = [0] * (n + 1)
    dfs(n)
    print(memo[n])