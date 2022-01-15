"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, a, b, c):
    global min
    if level == n:
        if a == b or a == c or b == c: return
        if a > b:
            if b > c:
                result = a - c
            else:
                if a > c:
                    result = a - b
                else:
                    result = c - b
        else:
            if a > c:
                result = b - c
            else:
                if b > c:
                    result = b - a
                else:
                    result = c - a
        if result < min:
            min = result
    else:
        dfs(level + 1, a + coin[level], b, c)
        dfs(level + 1, a , b + coin[level], c)
        dfs(level + 1, a, b, c + coin[level])

if __name__ == "__main__":
    n = int(input())
    coin = [int(input()) for _ in range(n)]
    min = 21479000000
    dfs(0, 0, 0, 0)
    print(min)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level):
    global minimum
    if level == n:
        diff = max(person) - min(person)
        if diff < minimum:
            tmp = set()
            for x in person:
                tmp.add(x)
            if len(tmp) == 3:
                minimum = diff
    else:
        for i in range(3):
            person[i] += coin[level]
            dfs(level + 1)
            person[i] -= coin[level]

if __name__ == "__main__":
    n = int(input())
    coin = [int(input()) for _ in range(n)]
    person = [0] * 3
    minimum = 2147000000
    dfs(0)
    print(minimum)