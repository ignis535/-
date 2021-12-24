import sys
# sys.stdin = open("input.txt", "r")

'''
def reverse_card(start, end):
    st = []
    for i in range(start, end + 1):
        st.append(card[i])
    for i in range(start, end + 1):
        card[i] = st.pop()

card = [i for i in range(21)]

for _ in range(10):
    a, b = map(int, input().split())
    reverse_card(a, b)

for i in range(1, 21):
    print(card[i], end = " ")
'''

card = [i for i in range(21)]

for _ in range(10):
    s, e = map(int, input().split())
    for i in range((e - s + 1) // 2):
        card[s + i], card[e - i] = card[e - i], card[s + i]

card.pop(0)
for element in card:
    print(element, end = ' ')
