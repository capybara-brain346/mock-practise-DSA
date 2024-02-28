arr = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39]


def fibonacci(arr, target):
    size = len(arr)
    start = 0

    f0 = 0
    f1 = 1
    f2 = 1

    while (f2 < size):
        f0 = f1
        f1 = f2
        f2 = f1 + f0

    while (f2 > 1):
        index = min(start + f0, size - 1)
        if arr[index] < target:
            f2 = f1
            f1 = f1 - f0
            f0 = f2 - f1 + 1
            start = index
        elif arr[index] > target:
            f2 = f0
            f1 = f1 - f0
            f0 = f2 - f1

        else:
            return index
    if (f1) and (arr[size - 1] == target):
        return size - 1
    return None


print(fibonacci(arr, 21))
