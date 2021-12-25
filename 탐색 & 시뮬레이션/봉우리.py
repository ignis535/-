import sys
# sys.stdin = open("input.txt", "rt")

'''
n = int(input())
arr = []
zeros = [0] * (n + 2)
arr.append(zeros)
for _ in range(n):
    tmp = [0] + list(map(int, input().split())) + [0]
    arr.append(tmp)
arr.append(zeros)

cnt = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        comp = [arr[i - 1][j],
                arr[i + 1][j],
                arr[i][j - 1],
                arr[i][j + 1]]
 
        for element in comp:
            if arr[i][j] <= element:
                break
        else:
            cnt += 1
print(cnt)
'''

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]
arr.insert(0, [0] * n)
arr.append([0] * n)
for row in arr:
    row.insert(0, 0)
    row.append(0)

di = [-1, 0, 1, 0]
dj = [0, 1, 0, -1]

cnt = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if all(arr[i][j] > arr[i + di[k]][j + dj[k]] for k in range(4)):
            cnt += 1

print(cnt)            


