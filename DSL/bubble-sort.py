<<<<<<< HEAD
def bubble(arr):
    for i in range(len(arr) - 1, 0, -1):
        for j in range(i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


print(bubble([4, 3, 1, 8, 6, 0, 9]))
=======
def bubble(arr):
    for i in range(len(arr)-1,0,-1):
        for j in range(i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
    return arr

print(bubble([4,3,1,8,6,0,9]))
>>>>>>> c86646d2c6758a6b5b0d25bd4931f28d026307cf
