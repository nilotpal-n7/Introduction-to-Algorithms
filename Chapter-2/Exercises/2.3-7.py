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
    
array = [1,2,4,5,6,7,8,9,55]
x = 55
len = len(array)
found = True

for i in range(len):
    v = x-array[i]
    index = find(array,0,len-1,v)
    if(index != "Nil" and index!=i):
        print(f"Yes: {v} + {array[i]} = {x}")
        found = False
        break

if(found):
    print("NO")
