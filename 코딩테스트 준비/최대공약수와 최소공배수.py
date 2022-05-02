# n1, n2 = map(int, input().split())
#
# result = 1
# while True:
#     minimum = min(n1, n2)
#     for i in range(2, minimum + 1):
#         if n1 % i == 0 and n2 % i == 0:
#             n1 //= i
#             n2 //= i
#             result *= i
#             break
#     else:
#         print(result)
#         print(n1 * n2 * result)
#         break
def gcd(a, b):
    if a < b: a, b = b

    while(b != 0):
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

if __name__ == "__main__":
    n1, n2 = map(int, input().split())
    print(gcd(n1, n2))
    print(lcm(n1, n2))
