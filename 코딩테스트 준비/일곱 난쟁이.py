people = [int(input()) for _ in range(9)]
total = sum(people)

for i in range(8):
    for j in range(i + 1, 9):
        if total - people[i] - people[j] == 100:
            tmp1 = people[i]
            tmp2 = people[j]

            # tmp 변수 없이 remoce하면 2번째 remove에서 인덱스값이 변경되어
            # 원하는 결과가 나오지 않는다.
            people.remove(tmp1)
            people.remove(tmp2)

            people.sort()
            print("\n".join(map(str, people)))

            exit()

