"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(idx, sum):
    global cnt
    if sum > t: return 

    if sum == t:
        cnt += 1
    else:
        for i in range(idx, k):
            if coin[i][1] != 0:
                coin[i][1] -= 1
                dfs(i, sum + coin[i][0])
                coin[i][1] += 1

if __name__ == "__main__":
    t = int(input())
    k = int(input())
    coin = [list(map(int, input().split())) for _ in range(k)]
    coin.sort(reverse = True)
    cnt = 0
    dfs(0, 0)
    print(cnt)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum):
    global cnt
    if sum > t: return 
    if level == k:
        if sum == t:
            cnt += 1
    else:
        for i in range(cn[level] + 1):
            dfs(level + 1, sum + (cv[level] * i))

if __name__ == "__main__":
    t = int(input())
    k = int(input())
    cv = []
    cn = []
    for _ in range(k):
        price, nums = map(int, input().split())
        cv.append(price)
        cn.append(nums)
    cnt = 0
    dfs(0, 0)
    print(cnt)