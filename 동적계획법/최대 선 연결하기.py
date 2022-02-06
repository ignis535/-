import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    memo = [1] * n

    result = 0
    for i in range(1, n):
        max = 1
        for j in range(i - 1, -1, -1):
            if arr[j] < arr[i] and memo[j] > max:
                max = memo[j]
        memo[i] = max + 1
        if max > result:
            result = max

    print(result)

