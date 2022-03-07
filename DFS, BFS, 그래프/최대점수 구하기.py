"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, score, time, cum_sum):
    global max
    if tot - cum_sum + score < max: return 
    if time > m: return
    if level == n:
        if score > max:
            max = score
    else:
        dfs(level   + 1, 
            score   + problem[level][0],
            time    + problem[level][1],
            cum_sum + problem[level][0])
        dfs(level   + 1,
            score,
            time,
            cum_sum + problem[level][0])

if __name__ == "__main__":
    n, m = map(int, input().split())
    tot = 0
    problem = []
    for _ in range(n):
        score, time = map(int, input().split())
        tot += score
        problem.append((score, time))
    max = 0
    dfs(0, 0, 0, 0)
    print(max)
"""
import sys
# sys.stdin = open("input.txt", 'r')

def dfs(level, score, time):
    global max
    if time > m: return

    if level == n:
        if score > max:
            max = score
    else:
        dfs(level + 1, score + ps[level], time + pt[level])
        dfs(level + 1, score, time)

if __name__ == "__main__":
    n, m = map(int, input().split())
    ps = []
    pt = []
    for _ in range(n):
        score, time = map(int, input().split())
        ps.append(score)
        pt.append(time)
    max = -2147000000
    dfs(0, 0, 0)
    print(max)