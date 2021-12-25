import sys
# sys.stdin = open("input.txt", "rt")

arr = [list(map(int, input().split())) for _ in range(7)]

def isCorrect(sub_arr):
    for i in range(2):
        if sub_arr[i] != sub_arr[4 - i]:
            return False
    else:
        return True

cnt = 0
for i in range(7):
    for j in range(3):
        row_sub = arr[i][j : j + 5]    
        col_sub = []
        for k in range(5):
            col_sub.append(arr[k + j][i])
        if isCorrect(row_sub): cnt += 1
        if isCorrect(col_sub): cnt += 1

print(cnt)