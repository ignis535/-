import sys
# sys.stdin = open("input.txt", 'r')

def dfs(node):
    if node == n + 1:
        for i in range(1, n + 1):
            if check[i] == 1:
                print(i, end = ' ')
        print()
    else:
        check[node] = 1
        dfs(node + 1)
        check[node] = 0
        dfs(node + 1)

if __name__ == "__main__":
    n = int(input())
    check = [0] * (n + 1)
    dfs(1)