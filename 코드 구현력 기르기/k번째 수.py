import sys
# sys.stdin = open("input.txt", "rt")
T = int(input())

for i in range(T):
    N, s, e, k = map(int, input().split())
    arr = list(map(int, input().split()))
    subarr = arr[s - 1 : e]
    subarr.sort()
    print(f"#{i + 1} {subarr[k - 1]}")
