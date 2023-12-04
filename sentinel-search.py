def sentinel(arr, target):
    size = len(arr)
    arr.append(target)
    i = 0
    while (arr[i]!=target):
        i+=1
    if (i==size):
        return None
    else:
        return i
    
print(sentinel([4,3,1,6,5,8,2],8))
