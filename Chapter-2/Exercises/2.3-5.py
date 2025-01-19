def find(array, start, end, v):
    n = int((start+end+1)/2)
    check = array[n]

    if(start == end and v!=check):
        return "Nil"

    if(v<check):
        return find(array, start, n-1, v)
    elif(v>check):
        return find(array, n+1, end, v)
    elif(v==check):
        return n
    
array = [0,1,2,4,5,6,7,8,9]
v = 3
end = (len(array)-1)
index = find(array,0,end,v)
print(index)
