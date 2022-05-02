l# people = 0
# maximum  = 0
#
# for _ in range(10):
#     down, up = map(int, input().split())
#     people += up
#     people -= down
#     if people > maximum: maximum = people
#
# print(maximum)

people = 0
maximum = 0

for _ in range(10):
    down, up = map(int, input().split())
    people += (up - down)
    maximum = max(people, maximum)

print(maximum)