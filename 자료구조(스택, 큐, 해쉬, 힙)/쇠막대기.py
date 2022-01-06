"""
import sys
# sys.stdin = open("input.txt", 'r')

lasier = input()

stack = []
tot = 0
for i in range(len(lasier)):
    if lasier[i] == '(':
        stack.append('(')
    elif lasier[i] == ')' and lasier[i - 1] == ')':
        tot += 1
        stack.pop()
    else:
        stack.pop()
        tot += len(stack)
print(tot)
"""
import sys
# sys.stdin = open("input.txt", 'r')

lasier = input()

stack = []
tot = 0
for i in range(len(lasier)):
    if lasier[i] == '(':
        stack.append(lasier[i])
    else:
        if lasier[i - 1] == '(':
            stack.pop()
            tot += len(stack)
        else:
            stack.pop()
            tot += 1
print(tot)