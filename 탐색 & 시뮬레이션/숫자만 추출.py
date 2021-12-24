import sys
# sys.stdin = open("input.txt", "rt")

'''
def to_natural_num(string):
    result = ""
    for ch in string:
        if ch.isdigit():
            result += ch
    return int(result)


def get_divisor(n):
    cnt = 0
    for i in range(1, n + 1):
        if n % i == 0:
            cnt += 1
    return cnt

string = input()
natural_num = to_natural_num(string)
print(natural_num)
print(get_divisor(natural_num))
'''

string = input()

res = 0
for ch in string:
    if ch.isdecimal():
        res = res * 10 + int(ch)
cnt = 0
for i in range(1, res + 1):
    if res % i == 0:
        cnt += 1
print(res)
print(cnt)