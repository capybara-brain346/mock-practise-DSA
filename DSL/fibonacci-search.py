def fibonacci(arr,target):
    size = len(arr)
    
    start = -1

    f0 = 0
    f1 = 1
    f2 = 1
    while (f2<size):
        f0 = f1
        f1 = f2
        f2 = f1 + f0
    
    while (f2>1):
        index = min(start + f0, size-1)
        if arr[index]<target:
            f2=f1
            f1=f1-f0
            f0=f2-f1
            start = index
        elif arr[index]>target:
            f2=f0
            f1=f1-f0
            f0=f2-f1
        else:
            return index

    if (f1) and  (arr[size-1]==target):
        return size-1
    return None

print(fibonacci([1,2,3,4,5,6,7,8,9,10],4))

