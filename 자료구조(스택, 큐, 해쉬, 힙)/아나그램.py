"""
import sys
# sys.stdin = open("input.txt", 'r')

word1 = input()
word2 = input()

check = dict()
for x in word1:
    if x not in check:
        check[x] = 1
    else:
        check[x] += 1

for x in word2:
    check[x] -= 1

for key, val in check.items():
    if val != 0:
        print("NO")
        break
else:
    print("YES")
"""
"""
import sys
# sys.stdin = open("input.txt", 'r')

word1 = input()
word2 = input()
check1 = dict()
check2 = dict()

for x in word1:
    check1[x] = check1.get(x, 0) + 1
for x in word2:
    check2[x] = check2.get(x, 0) + 1

for i in check1:
    if i in check2:
        if check1[i] != check2[i]:
            print("NO")
            break
    else:
        print("NO")
        break
else:
    print("YES")
"""
"""
딕셔너리 해싱
import sys
# sys.stdin = open("input.txt", 'r')

word1 = input()
word2 = input()
check = dict()

for x in word1:
    check[x] = check.get(x, 0) + 1

for x in word2:
    check[x] = check.get(x, 0) - 1

for x in word1:
    if check[x] != 0:
        print("NO")
        break
else:
    print("YES")
"""
# 리스트 해싱
# A~Z: 65~100
# a~z: 97~112
import sys
# sys.stdin = open("input.txt", 'r')

word1 = input()
word2 = input()
check1 = [0] * 52
check2 = [0] * 52

for x in word1:
    if x.isupper():
        check1[ord(x) - 65] += 1
    else:
        check1[ord(x) - 71] += 1
for x in word2:
    if x.isupper():
        check2[ord(x) - 65] += 1
    else:
        check2[ord(x) - 71] += 1

for i in range(52):
    if check1[i] != check2[i]:
        print("NO")
        break
else:
    print("YES")
