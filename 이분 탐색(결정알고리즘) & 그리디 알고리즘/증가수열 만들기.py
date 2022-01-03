"""
import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())
arr = list(map(int, input().split()))

left = 0
right = n - 1
pivot = 0
cnt = 0
result = []
while left <= right:
    if arr[left] <= arr[right]:
        if arr[left] > pivot:
            result.append('L')
            pivot = arr[left]
            left += 1
            cnt += 1
        else:
            if arr[right] > pivot:
                result.append('R')
                pivot = arr[right]
                right -= 1
                cnt += 1
            else:
                break
    else:
        if arr[right] > pivot:
            result.append('R')
            pivot = arr[right]
            right -= 1
            cnt += 1
        else:
            if arr[left] > pivot:
                result.append('L')
                pivot = arr[left]
                left += 1
                cnt += 1
            else:
                break

print(cnt)        
for x in result:
    print(x, end = "")
"""
import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())
arr = list(map(int, input().split()))

left = 0
right = n - 1
pivot = 0
result = ""
tmp = []
while left <= right:
    if arr[left] > pivot:
        tmp.append((arr[left], 'L'))
    if arr[right] > pivot:
        tmp.append((arr[right], 'R'))
    if len(tmp) == 0: break
    tmp.sort()
    result = result + tmp[0][1]
    pivot = tmp[0][0]
    if tmp[0][1] == 'L':
        left += 1
    else:
        right -= 1
    tmp.clear()
print(len(result))
print(result)
