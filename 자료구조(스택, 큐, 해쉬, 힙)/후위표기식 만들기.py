"""
import sys
# sys.stdin = open("input.txt", 'r')

exps = input()

def rank(op):
    if op in ('+', '-'):
        return 1
    elif op in ('*', '/'):
        return 2
    else:
        return 0

stack = []
result = []
for x in exps:
    if x == '(':
        stack.append('(')
    elif x == ')':
        while stack[-1] != '(':
            tmp = stack.pop()
            result.append(tmp)
        stack.pop()
    elif x in ('+', '-', '*', '/'):
        if len(stack) == 0 or rank(x) > rank(stack[-1]):
            stack.append(x)
        else:
            while stack and rank(stack[-1]) >= rank(x):
                tmp = stack.pop()
                result.append(tmp)
            stack.append(x)
    else:
        result.append(x)

while stack:
    tmp = stack.pop()
    result.append(tmp)

result = ''.join(result)
print(result)
"""
import sys
# sys.stdin = open("input.txt", 'r')

expr = input()

stack = []
result = ""
for x in expr:
    if x.isdecimal():
        result += x
    else:
        if x == '(':
            stack.append(x)
        elif x == ')':
            while stack and stack[-1] != '(':
                result += stack.pop()
            stack.pop()
        elif x == '*' or x == '/':
            while stack and (stack[-1] == '*' or stack[-1] == '/'):
                result += stack.pop()
            stack.append(x)
        elif x == '+' or x == '-':
            while stack and stack[-1] != '(':
                result += stack.pop()
            stack.append(x)
    
while stack:
    result += stack.pop()

print(result)