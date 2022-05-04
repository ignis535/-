# a, b = map(int, input().split())
#
# number = 1
# i = 0
# arr = [0]
# find = False
# while True:
#     if find:
#         break
#
#     cnt = number
#     while cnt > 0:
#         arr.append(number)
#         i += 1
#         if i == b:
#             find = True
#             break
#         cnt -= 1
#     number += 1
#
# print(sum(arr[a : b + 1]))
a, b = map(int, input().split())

arr = []
for i in range(1, 50):
    for j in range(i):
        if len(arr) == b:
            break
        arr.append(i)

print(sum(arr[a - 1 : b]))