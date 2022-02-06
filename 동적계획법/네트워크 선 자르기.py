"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    memo = [0, 1, 2]
    
    for i in range(3, n + 1):
        memo.append(memo[i - 2] + memo[i - 1])

    print(memo[n])
"""
import sys
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n = int(input())
    memo = [0] * (n + 1)
    memo[1] = 1
    memo[2] = 2
    for i in range(3, n + 1):
        memo[i] = memo[i - 1] + memo[i - 2]

    print(memo[n])