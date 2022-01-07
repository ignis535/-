"""
import sys
# sys.stdin = open("input.txt")

result = "NO"

def dfs(node):
    global result
    if node == n:
        sum = 0
        for i in range(n):
            if check[i] == 1:
                sum += arr[i]
            else:
                sum -= arr[i]
        if sum == 0:
            result = "YES"
    else:
        check[node] = 1
        dfs(node + 1)
        check[node] = 0
        dfs(node + 1)

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    check = [0] * n
    dfs(0)
    print(result)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    global switch
    if switch == 1: return 
    if sum > total // 2: return

    if level == n:
        if sum == (total - sum):
            print("YES")
            switch = 1
    else:
        dfs(level + 1, sum + arr[level])
        dfs(level + 1, sum)

if __name__ == "__main__":
    switch = 0
    n = int(input())
    arr = list(map(int, input().split()))
    total = sum(arr)
    dfs(0, 0)
    if switch == 0: print("NO")