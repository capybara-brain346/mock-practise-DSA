def insertion(list: list[int]) -> list[int]:
    for i in range(1, len(list)):
        j = i
        while list[j-1] > list[j] and j>0:
            list[j-1], list[j] = list[j],list[j-1]
            j-=    1
    return list
print(insertion([4,3,1,8,6,0,9]))