"""
import sys
# sys.stdin = open("input.txt", 'r')

n, m = map(int, input().split())

arr = str(n)
stack = [int(arr[0])]
for i in range(1, len(arr)):
    while len(stack) != 0 and m > 0 and stack[-1] < int(arr[i]):
        stack.pop()
        m -= 1
    stack.append(int(arr[i]))

while m:
    stack.pop()
    m -= 1

for x in stack:
    print(x, end = '')
"""
import sys
# sys.stdin = open("input.txt", 'r')

n, m = map(int, input().split())
arr = list(map(int, str(n)))

stack = []
for x in arr:
    while stack and m > 0 and stack[-1] < x:
        stack.pop()
        m -= 1
    stack.append(x)
if m != 0:
    stack = stack[: -m]

result = ''.join(map(str, stack))
print(result)