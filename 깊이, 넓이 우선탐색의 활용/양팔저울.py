"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    if level == k:
        if sum > 0:
            check[sum] = 1
    else:
        dfs(level + 1, sum + weight[level])
        dfs(level + 1, sum - weight[level])
        dfs(level + 1, sum)

if __name__ == "__main__":
    k = int(input())
    weight = list(map(int, input().split()))
    s = sum(weight)
    check = [0] * (s + 1)
    dfs(0, 0)
    cnt = 0
    for i in range(1, len(check)):
        if check[i] == 0:
            cnt += 1
    print(cnt)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    if level == k:
        if sum > 0:
            result.add(sum)
    else:
        dfs(level + 1, sum + weight[level])
        dfs(level + 1, sum - weight[level])
        dfs(level + 1, sum)

if __name__ == "__main__":
    k = int(input())
    weight = list(map(int, input().split()))
    s = sum(weight)
    result = set()
    dfs(0, 0)
    print(s - len(result))