"""
import sys
sys.stdin = open("input.txt", 'r')

def dfs(level, p):
    global cnt
    if level == n:
        cnt += 1
        for i in range(p):
            print(chr(result[i] + 64), end = '')
        print()
    else:
        for i in range(1, 27):
            if i < 10:
                if i == code[level]:
                    result[p] = i
                    dfs(level + 1, p + 1)
            else:
                if level + 1 < n and i == code[level] * 10 + code[level + 1]:
                    result[p] = i
                    dfs(level + 2, p + 1)
    
if __name__ == "__main__":
    code = list(map(int, list(input())))
    n = len(code)
    cnt = 0
    result = [0] * n
    dfs(0, 0)
    print(cnt)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, p):
    global cnt
    if level == n:
        cnt += 1
        for i in range(p):
            print(chr(result[i] + 64), end = '')
        print()
    else:
        for i in range(1, 27):
            if code[level] == i:
                result[p] = i
                dfs(level + 1, p + 1)
            elif  i >= 10 and level + 1 < n and code[level] == i // 10 and code[level + 1] == i % 10:
                result[p] = i
                dfs(level + 2, p + 1)

if __name__ == "__main__":
    code = list(map(int, input()))
    n = len(code)
    result = [0] * n
    cnt = 0
    dfs(0, 0)
    print(cnt)