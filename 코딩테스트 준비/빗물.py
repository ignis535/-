# row, col = map(int, input().split())
# height = list(map(int, input().split()))
#
# map = [[0] * col for _ in range(row)]
# for j in range(col):
#     for i in range(row - 1, row - 1 - height[j], - 1):
#         map[i][j] = 1
#
#
# result = 0
# for i in range(row):
#     stack = []
#     cnt = 0
#     for j in range(col):
#         if len(stack) != 0 and map[i][j] == 0:
#             cnt += 1
#
#         if map[i][j] == 1:
#             if len(stack) == 0:
#                 stack.append('block')
#             else:
#                 if cnt != 0:
#                     result += cnt
#                     cnt = 0
#
# print(result)
height, width = map(int, input().split())
block = list(map(int, input().split()))

result = 0
for i in range(1, width - 1):
    rightMax = max(block[i + 1 :])
    leftMax  = max(block[ : i])

    minVal = min(leftMax, rightMax)

    if block[i] < minVal:
        result += minVal - block[i]

print(result)

