n, k = map(int, input().split())
item = list(map(int, input().split()))

item_cnt = dict()
for x in list(set(item)):
    item_cnt[x] = 0

for x in item:
    item_cnt[x] += 1

result = 0
plug = set()
for i in range(k):
    if len(plug) < n:
        if item[i] in plug:
            item_cnt[item[i]] -= 1
        else:
            plug.add(item[i])
            item_cnt[item[i]] -= 1
    else:
        if item[i] in plug:
            item_cnt[item[i]] -= 1
        else:
            min_val = 100
            for x in plug:
                if item_cnt[x] < min_val:
                    min_val = item_cnt[x]
                    find_item = x
            plug.discard(find_item)
            plug.add(item[i])
            result += 1
            item_cnt[item[i]] -= 1
print(result)



