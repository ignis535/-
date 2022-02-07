"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, limit = map(int, input().split())
    bag = [tuple(map(int, input().split())) for _ in range(n)]
    memo = [0] * (limit + 1)

    for weight, price in bag:
        for i in range(weight, limit + 1):
            new_price = memo[i - weight] + price
            if new_price > memo[i]:
                memo[i] = new_price
    print(memo[-1])
"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, limit = map(int, input().split())
    memo = [0] * (limit + 1)

    for _ in range(n):
        weight, price = map(int, input().split())
        for j in range(weight, limit + 1):
            memo[j] = max(memo[j], memo[j - weight] + price)
    print(memo[-1])