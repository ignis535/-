"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, start):
    global cnt
    if level == k:
        tot = 0
        for i in range(k):
            tot += result[i]
        if tot % m == 0:
            cnt += 1
    else:
        for i in range(start, n):
            result[level] = arr[i]
            dfs(level + 1, i + 1)

if __name__ == "__main__":
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    m = int(input())
    cnt = 0
    result = [0] * k
    dfs(0, 0)
    print(cnt)

import sys
sys.stdin = open("input.txt", 'r')

def dfs(level, start, sum):
    global cnt
    if level == k:
        if sum % m == 0:
            cnt += 1
    else:
        for i in range(start, n):
            dfs(level + 1, i + 1, sum + arr[i])


if __name__ == "__main__":
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    m = int(input())
    cnt = 0
    dfs(0, 0, 0)
    print(cnt)
"""

import sys
import itertools as it
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    m = int(input())
    cnt = 0
    for case in it.combinations(arr, k):
        if sum(case) % m == 0:
            cnt += 1
    print(cnt)
