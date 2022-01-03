"""
import sys
# sys.stdin = open("input.txt", "r")

width = int(input())
height = list(map(int, input().split()))
height.sort()
m = int(input())

for _ in range(m):
    highest_idx = height.index(height[-1])
    lowest_idx = 0
    while height[lowest_idx + 1] == height[0]:
        lowest_idx += 1
    height[highest_idx] -= 1
    height[lowest_idx]  += 1
print(height[-1] - height[0])
"""

import sys
# sys.stdin = open("input.txt", "r")

width = int(input())
height = list(map(int, input().split()))
m = int(input())
height.sort()

for _ in range(m):
    height[0] += 1
    height[-1] -= 1
    height.sort()
print(height[-1] - height[0])
