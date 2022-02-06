"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    memo = [1] * (n)

    for i in range(1, n):
        maximum = 1
        idx = 0
        for j in range(i - 1, -1, -1):
            if arr[j] < arr[i]:
                if memo[j] + 1 > maximum:
                    maximum = memo[j] + 1
                    idx = j
        memo[i] = maximum
        pos = idx
    print(max(memo))
"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    memo = [0] * n

    result = 0
    for i in range(1, n):
        max = 0
        for j in range(i - 1, -1, -1):
            if arr[j] < arr[i] and memo[j] > max:
                max = memo[j]
        memo[i] = max + 1
        if memo[i] > result:
            result = memo[i]
    print(result)