import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, sum, c_sum):
    global max
    if sum > c:
        return
    if sum + (total - c_sum) < max:
        return 
    if level == n:
        if sum > max:
            max = sum
    else:
        dfs(level + 1, sum + weight[level], c_sum + weight[level])
        dfs(level + 1, sum, c_sum + weight[level])

if __name__ == "__main__":
    c, n = map(int, input().split())
    weight = [int(input()) for _ in range(n)]
    max = 0
    total = sum(weight)
    dfs(0, 0, 0)
    print(max)
