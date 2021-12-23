import sys
# sys.stdin = open("input.txt", "rt")

n = int(input())
answers = list(map(int ,input().split()))

cnt = 0
score = 0
for answer in answers:
    if answer == 1:
        cnt += 1
        score += cnt
    else:
        cnt = 0
print(score)