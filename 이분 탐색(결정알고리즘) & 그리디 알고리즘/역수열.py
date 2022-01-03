import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())
arr = list(map(int, input().split()))

result = [0] * n
for i in range(n):
    for j in range(n):
        if arr[i] == 0 and result[j] == 0:
            result[j] = i + 1
            break
        elif result[j] == 0:
            arr[i] -= 1
for x in result:
    print(x, end = ' ')