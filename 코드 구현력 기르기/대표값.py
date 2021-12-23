import sys
# sys.stdin = open('input.txt', 'rt')
n = int(input())
math_score = list(map(int, input().split()))
# round 함수는 round-half-even 방식을 지원하므로
# 우리가 일반적으로 사용하는 round-half-up 방식을 사용하기 위해서는
# int(x + 0.5) 방식을 사용해야 한다.
avg = int(sum(math_score) + 0.5 / n)


min = float('inf')
for id, score in enumerate(math_score):
    dev = abs(avg - score)
    if dev < min:
        min = dev
        present_score = score
        present_id = id + 1
    if dev == min:
        if score > present_score:
            present_score = score
            present_id = id + 1
print(avg, present_id)