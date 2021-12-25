import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

def get_area():
    start = 0
    end = n
    tot = 0
    for i in range(n):
        for j in range(start, end):
            tot += arr[i][j]
        if i < n // 2:
            start += 1
            end -= 1
        else:
            start -= 1
            end += 1
    return tot

def rotate_row(row_number, direction, count):
    if direction == 0:
        for _ in range(count):
            tmp = arr[row_number].pop(0)
            arr[row_number].append(tmp)
    else:
        for _ in range(count):
            tmp = arr[row_number].pop()
            arr[row_number].insert(0, tmp)

m = int(input())
for _ in range(m):
    row_number, direction, count = map(int, input().split())
    rotate_row(row_number - 1, direction, count)
print(get_area())