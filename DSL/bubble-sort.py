def bubble(list: list[int]) -> list:
    for i in range(len(list)-1,0,-1):
        for j in range(i):
            if list[j]>list[j+1]:
                list[j],list[j+1]=list[j+1],list[j]
    
    return list

print(bubble([4,3,1,8,6,0,9]))