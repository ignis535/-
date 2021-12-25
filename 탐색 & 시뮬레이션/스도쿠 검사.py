import sys
# sys.stdin = open('input.txt', 'rt')

'''

arr = [list(map(int, input().split())) for _ in range(9)]

def isPerfect():
    for i in range(9):
        check_row = [0] * 10
        check_col = [0] * 10
        for j in range(9):
            if check_row[arr[i][j]] == 0:
                check_row[arr[i][j]] = 1
            else:
                return False
            if check_col[arr[j][i]] == 0:
                check_col[arr[j][i]] = 1
            else:
                return False
    
    di = [-1, -1, -1, 0, 1, 1, 1, 0]
    dj = [-1, 0, 1, 1, 1, 0, -1, -1]
    for i in range(1, 9, 3):
        for j in range(1, 9, 3):
            check_area = [0] * 10
            for k in range(8):
                if check_area[arr[i + di[k]][j + dj[k]]] == 0:
                    check_area[arr[i + di[k]][j + dj[k]]] = 1
                else:
                    return False
    return True

if isPerfect():
    print("YES")
else:
    print("NO")
'''

arr = [list(map(int, input().split())) for _ in range(9)]

def isPerfect():
    for i in range(9):
        check_row = [0] * 10
        check_col = [0] * 10
        for j in range(9):
            check_row[arr[i][j]] = 1
            check_col[arr[j][i]] = 1
        if sum(check_row) != 9 or sum(check_col) != 9:
            return False
    for i in range(3):
        for j in range(3):
            check_area = [0] * 10
            for k in range(3):
                for s in range(3):
                    check_area[arr[i * 3 + k][j * 3 + s]] = 1
            if sum(check_area) != 9:
                return False
    return True            

if isPerfect():
    print("YES")
else:
    print("NO")