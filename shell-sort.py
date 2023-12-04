def shell(list: list[int]) -> list[int]:
    gap = len(list)//2
    while gap > 0:
        for i in range(gap,len(list)):
            temp = list[i]
            j=i 
            while j>=gap and list[j-gap]>temp:
                list[j] = list[j-gap]
                j = j-gap
            list[j] = temp
        gap = gap//2
    return list

print(shell([17,3,9,1,8]))