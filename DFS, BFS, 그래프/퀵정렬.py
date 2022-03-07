def Qsort(left, right):
    if left < right:
        pivot = arr[right]
        pos = left
        for i in range(left, right):
            if arr[i] <= pivot:
                arr[i], arr[pos] = arr[pos], arr[i]
                pos += 1
        arr[right], arr[pos] = arr[pos], arr[right]
        Qsort(left, pos - 1)
        Qsort(pos + 1, right)

if __name__ == "__main__":
    arr = [2, 5, 1, 9, 3, 7, 0, 10]
    print("Before sort")
    print(arr)
    Qsort(0, 7)
    print("After sort")
    print(arr)