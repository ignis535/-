import sys
# sys.stdin = open('input.txt', 'rt')

'''
1. 첫 번째 방법
def digit_sum(x):
    return sum(map(int, list(x)))

n = int(input())
natural_nums = list(input().split())

result = []
for num in natural_nums:
    result.append(digit_sum(num))
print(natural_nums[result.index(max(result))])

2. 두 번째 방법
def digit_sum(x):
    sum = 0
    while x > 0:
        sum += x % 10
        x = x // 10
    return sum

n = int(input())
natural_nums = list(int, input().split())

max = -2147000000
for num in natural_nums:
    tot = digit_sum(num)
    if tot > max:
        max = tot
        res = num
print(res)

3. 세 번째 방법

def digit_sum(x):
    sum = 0
    for ch in str(x):
        sum += int(ch)
    return sum

n = int(input())
natural_nums = list(int, input().split())

max = -2147000000
for num in natural_nums:
    tot = digit_sum(num)
    if tot > max:
        max = tot
        res = num
print(res)
'''