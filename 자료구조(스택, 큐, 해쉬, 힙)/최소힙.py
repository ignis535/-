"""
import sys
import heapq
# sys.stdin = open("input.txt", 'r')

heap = []
while True:
    n = int(input())
    if n > 0:
        heapq.heappush(heap, n)
    elif n == 0:
        tmp = heapq.heappop(heap)
        print(tmp)
    elif n == -1:
        break
"""
import sys
import heapq as hq
# sys.stdin = open("input.txt", 'r')

heap = []
while True:
    n = int(input())
    if n == -1: break

    if n == 0:
        if len(heap) == 0:
            print(-1)
        else:
            print(hq.heappop(heap))
    else:
        hq.heappush(heap, n)
