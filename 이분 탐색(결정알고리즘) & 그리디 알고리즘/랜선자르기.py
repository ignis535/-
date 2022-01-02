'''
결정알고리즘
1. 값의 범위가 정해짐(정렬된 상태)
2. 경우에 따라 처리 방법을 결정
import sys
# sys.stdin = open("input.txt", "r")

k, n = map(int, input().split())
lens = [int(input()) for _ in range(k)]

left = 1
right = max(lens)
while left <= right:
    pivot = (left + right) // 2
    tot = 0
    for i in range(k):
       tot += lens[i] // pivot
    if tot < n:
        right = pivot - 1
    elif tot > n:
        left = pivot + 1
    else:
        while tot == n:
            pivot += 1
            tot = 0
            for i in range(k):
                tot += lens[i] // pivot
        break

if tot < n:
    print(pivot - 1)
elif tot > n:
    print(pivot + 1)
else:
    print(pivot)
'''

import sys
# sys.stdin = open('input.txt', 'r')

k, n = map(int, input().split())
line = []
maximum = 0
for _ in range(k):
    tmp = int(input())
    line.append(tmp)
    if tmp > maximum:
        maximum = tmp

def count(pivot):
    tot = 0
    for i in range(k):
        tot += line[i] // pivot
    return tot

left = 1
right = maximum
result = 0
while left <= right:
    pivot = (left + right) // 2
    if count(pivot) >= n:
        result = pivot
        left = pivot + 1
    else:
        right = pivot - 1
print(result)

