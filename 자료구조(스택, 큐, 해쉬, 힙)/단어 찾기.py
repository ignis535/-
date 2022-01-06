"""
import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())

check = {}
for _ in range(n):
    check[input()] = 0

for _ in range(n - 1):
    del check[input()]

print(list(check.keys())[0])
"""
import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())

peom = dict()
for _ in range(n):
    peom[input()] = 0
for _ in range(n - 1):
    peom[input()] = 1
for key, val in peom.items():
    if val == 0:
        print(key)
        break