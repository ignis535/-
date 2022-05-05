import sys


def dfs(idx, cnt):
    global max_val

    if cnt == k - 5:
        read_cnt = 0
        for word in words:
            for c in word:
                if not learn[ord(c) - ord('a')]:
                    break
            else:
                read_cnt += 1

        max_val = max(max_val, read_cnt)

    else:
        for i in range(idx, 26):
            if not learn[i]:
                learn[i] = 1
                dfs(i + 1, cnt + 1)
                learn[i] = 0


if __name__ == "__main__":
    n, k = map(int, input().split())
    if k < 5:
        print(0)
        exit()
    elif k == 26:
        print(n)
        exit()

    words = [set(sys.stdin.readline().rstrip()) for _ in range(n)]
    essential = ['a', 'n', 't', 'i', 'c']

    learn = [0] * 26
    for c in essential:
        learn[ord(c) - ord('a')] = 1

    max_val = 0
    dfs(0, 0)
    print(max_val)
