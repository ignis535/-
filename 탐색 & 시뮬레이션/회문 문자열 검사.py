import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())

for i in range(n):
    string = input().lower()
    iter = len(string) // 2
    for j in range(iter):
        if string[j] != string[-(j + 1)]:
            print(f"#{(i + 1)} NO")
            break
    else:
        print(f"#{(i + 1)} YES")

'''
for i in range(n):
    string = input()
    if string == string[::-1]:
        print(f"#{i + 1} YES)
    else:
        print(f"#{i + 1} NO)
'''
