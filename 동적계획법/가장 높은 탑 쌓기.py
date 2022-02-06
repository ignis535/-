import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    stone = [tuple(map(int, input().split())) for _ in range(n)]
    stone.sort(reverse = True, key = lambda x : x[0])
    memo = [0] * n
    memo[0] = stone[0][1]

    result = 0
    for i in range(1, n):
        max = 0
        for j in range(i - 1, -1, -1):
            if stone[j][2] > stone[i][2] and memo[j] > max:
                max = memo[j]
        memo[i] = max + stone[i][1]
        if memo[i] > result:
            result = memo[i]
    print(result)