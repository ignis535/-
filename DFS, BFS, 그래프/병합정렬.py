def Dsort(left, right):
    if left < right:
        mid = (left + right) // 2
        Dsort(left, mid)
        Dsort(mid + 1, right)
        p1 = left
        p2 = mid + 1
        tmp = []
        while p1 <= mid and p2 <= right:
            if arr[p1] < arr[p2]:
                tmp.append(arr[p1])
                p1 += 1
            else:
                tmp.append(arr[p2])
                p2 += 1
        if p1 <= mid:
            tmp += arr[p1 : mid + 1]
        if p2 <= right:
            tmp += arr[p2 : right + 1]
        for i in range(len(tmp)):
            arr[i + left] = tmp[i]

if __name__ == "__main__":
    arr = [2, 5, 1, 9, 3, 7, 0, 10]
    print("Before sort")
    print(arr)
    Dsort(0, 7)
    print("After sort")
    print(arr)