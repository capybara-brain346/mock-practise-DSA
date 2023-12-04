def selection(list):
    for i in range(len(list)-1):
        minpos = i
        for j in range(i,len(list)):
            if list[j]<list[minpos]:
                minpos = j
            
        list[i],list[minpos] = list[minpos],list[i]
    return list

print(selection([4,3,1,8,6,0,9]))