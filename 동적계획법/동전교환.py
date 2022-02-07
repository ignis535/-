"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    coin = list(map(int, input().split()))
    m = int(input())
    memo = [0] * (m + 1)

    for i in range(n):
        for j in range(coin[i], m + 1):
            if i == 0:
                memo[j] = memo[j - coin[0]] + 1
            else:
                memo[j] = min(memo[j], memo[j - coin[i]] + 1)

    print(memo[-1])
"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    coin = list(map(int, input().split()))
    m = int(input())
    memo = [500] * (m + 1)
    memo[0] = 0

    for i in range(n):
        for j in range(coin[i], m + 1):
            memo[j] = min(memo[j], memo[j - coin[i]] + 1)
    print(memo[-1])