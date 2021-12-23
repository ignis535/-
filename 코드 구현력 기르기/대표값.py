import sys
# sys.stdin = open('input.txt', 'rt')
n = int(input())
math_score = list(map(int, input().split()))
avg = round(sum(math_score) / n)


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