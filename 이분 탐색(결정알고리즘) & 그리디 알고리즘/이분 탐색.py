import sys
# sys.stdin = open("input.txt", "rt")

"""
n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

def binary_search(start, end, target):
    if start > end:
        return False
    pivot = (start + end) // 2
    if arr[pivot] > target:
        return binary_search(start, pivot - 1, target)
    elif arr[pivot] < target:
        return binary_search(pivot + 1, end, target)
    else:
        return pivot + 1

print(binary_search(0, n - 1, m))
"""

n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

left = 0
right = n - 1
while left <= right:
    pivot = (left + right) // 2
    if arr[pivot] < m:
        left = pivot + 1
    elif arr[pivot] > m:
        right = pivot - 1
    else:
        print(pivot + 1)
        break
