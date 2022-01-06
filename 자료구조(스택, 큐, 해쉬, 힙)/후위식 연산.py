import sys
# sys.stdin = open("input.txt", 'r')

exps = input()

stack = []
for x in exps:
    if x.isdecimal():
        stack.append(x)
    else:
        operand2 = stack.pop()
        operand1 = stack.pop()
        stack.append(str(eval(operand1 + x + operand2)))
print(stack[-1])