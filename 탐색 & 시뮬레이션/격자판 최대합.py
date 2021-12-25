import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

maximum = -2147000
for i in range(n):
    row_sum = column_sum = diag_sum1 = diag_sum2 = 0
    for j in range(n):
        row_sum += arr[i][j]
        column_sum += arr[j][i]
    diag_sum1 += arr[i][i]
    diag_sum2 += arr[i][n - 1 - i]
    if row_sum > maximum:
        maximum = row_sum
    if column_sum > maximum:
        maximum = column_sum
    if diag_sum1 > maximum:
        maximum = diag_sum1
    if diag_sum2 > maximum:
        maximum = diag_sum2
print(maximum)
