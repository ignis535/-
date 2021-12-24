import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())
list1 = list(map(int, input().split()))
m = int(input())
list2 = list(map(int, input().split()))

i = j = 0
result = []
while i < n and j < m:
    if list1[i] < list2[j]:
        result.append(list1[i])
        i += 1
    elif list1[i] > list2[j]:
        result.append(list2[j])
        j += 1
    else:
        result.append(list1[i])
        result.append(list2[j])
        i += 1
        j += 1

if i < n:
    result += list1[i:]
if j < m:
    result += list2[j:]

for element in result:
    print(element, end = " ")