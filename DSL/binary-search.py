def binary(arr, target):
    lower_bound = 0
    upper_bound = len(arr) - 1

    while lower_bound <= upper_bound:
        mid = (upper_bound + lower_bound) // 2
        if arr[mid] == target:
            return mid
        else:
            if arr[mid] < target:
                lower_bound = mid + 1
            else:
                upper_bound = mid - 1
    return "Not Found"


print(binary([1, 2, 3, 4, 5, 6], 9))
