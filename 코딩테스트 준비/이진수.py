# t = int(input())
#
# for _ in range(t):
#     n = int(bin(int(input()))[2 : ])
#     idx = 0
#     while(n > 0):
#         if(n % 10 == 1):
#             print(idx, end = ' ')
#         n //= 10
#         idx += 1
# t = int(input())
#
# for _ in range(t):
#     n = bin(int(input()))[2: ]
#
#     for i in range(len(n)):
#         if n[-i - 1] == '1':
#             print(i, end = ' ')

t = int(input())

for _ in range(t):
    n = bin(int(input()))

    for idx, val in enumerate(n[::-1]):
        if(val == '1'): print(idx, end = ' ')