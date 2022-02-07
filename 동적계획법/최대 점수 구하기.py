import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, m = map(int, input().split())
    memo = [0] * (m + 1)

    for _ in range(n):
        score, time = map(int, input().split())
        for i in range(m, time - 1, -1):
            memo[i] = max(memo[i], memo[i - time] + score)

    print(memo[-1])
    