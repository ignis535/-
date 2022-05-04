# def get_op(op_cnt):
#     op = []
#     for i in range(4):
#         while op_cnt[i] != 0:
#             op.append(symbol[i])
#             op_cnt[i] -= 1
#     return op
#
#
# def dfs(level):
#     global maximum, minimum
#     if level == n - 1:
#         tmp_arr = operand.copy()
#         tmp_result = result.copy()
#         tmp_result.reverse()
#
#         while len(tmp_arr) >= 2:
#             num1 = tmp_arr.pop()
#             num2 = tmp_arr.pop()
#             op = tmp_result.pop()
#             if op == '//' and (num1 < 0 or num2 < 0):
#                 num1 = abs(num1)
#                 num2 = abs(num2)
#                 tmp_arr.append(-eval(str(num1) + op + str(num2)))
#             else:
#                 tmp_arr.append(eval(str(num1) + op + str(num2)))
#
#         maximum = max(maximum, tmp_arr[-1])
#         minimum = min(minimum, tmp_arr[-1])
#
#     else:
#         for i in range(4):
#             if operator_cnt[i] != 0:
#                 operator_cnt[i] -= 1
#                 result[level] = symbol[i]
#                 dfs(level + 1)
#                 operator_cnt[i] += 1
#
#
# if __name__ == "__main__":
#     symbol = ['+', '-', '*', '//']
#
#     n = int(input())
#
#     result = [0] * (n - 1)
#
#     operand = [x for x in map(int, input().split())]
#     operand.reverse()
#
#     operator_cnt = [x for x in map(int, input().split())]
#
#     maximum = -1000000000
#     minimum = 1000000000
#     dfs(0)
#     print(maximum)
#     print(minimum)

def dfs(idx, tot, add, sub, mul, div):
    global max_val, min_val
    if idx == n:
        max_val = max(max_val, tot)
        min_val = min(min_val, tot)
    else:
        if add > 0:
            dfs(idx + 1, tot + nums[idx], add - 1, sub, mul, div)
        if sub > 0:
            dfs(idx + 1, tot - nums[idx], add, sub - 1, mul, div)
        if mul > 0:
            dfs(idx + 1, tot * nums[idx], add, sub, mul - 1, div)
        if div > 0:
            dfs(idx + 1, int(tot / nums[idx]), add, sub, mul, div - 1)


if __name__ == "__main__":
    n = int(input())
    nums = [x for x in map(int, input().split())]
    add, sub, mul, div = map(int, input().split())

    max_val = -1e9
    min_val = 1e9

    dfs(1, nums[0], add, sub, mul, div)
    print(max_val)
    print(min_val)