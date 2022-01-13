"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level):
    global switch
    if switch == 1: return
    if level == n:
        tot = 0
        for i in range(n):
            tot += coef[i] * result[i]
        if tot == f:
            print(' '.join(map(str, result)))
            switch = 1
    else:
        for i in range(1, n + 1):
            if check[i] == 0:
                check[i] = 1
                result[level] = i
                dfs(level + 1)
                check[i] = 0

if __name__ == "__main__":
    n, f = map(int, input().split())
    switch = 0
    check = [0] * (n + 1)
    result = [0] * n
    coef = [1]
    for r in range(n):
        tmp = coef[-1] * (n - 1 - r) / (r + 1)
        coef.append(tmp)
    dfs(0)

import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    global switch
    if switch == 1: return
    if level == n and sum == f:
        for i in range(n):
            print(result[i], end = ' ')
        switch = 1
    else:
        for i in range(1, n + 1):
            if check[i] == 0:
                check[i] = 1
                result[level] = i
                dfs(level + 1, sum + (coef[level] * result[level]))
                check[i] = 0

if __name__ == "__main__":
    n, f = map(int, input().split())
    switch = 0
    check = [0] * (n + 1)
    result = [0] * n
    coef = [1] * n
    for i in range(1, n - 1):
        coef[i] = coef[i - 1] * (n - i) / i
    dfs(0, 0)
"""
import sys
import itertools as it
# sys.stdin = open("input.txt", 'r')

if __name__ == "__main__":
    n, f = map(int, input().split())
    coef = [1] * n
    for i in range(1, n - 1):
        coef[i] = coef[i - 1] * (n - i) / i
    arr = [i for i in range(1, n + 1)]
    for case in it.permutations(arr, n):
        tot = 0
        for idx, val in enumerate(case):
            tot += (coef[idx] * val)
        if tot == f:
            print(' '.join(map(str, case)))
            break