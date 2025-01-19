def sort(array):
    n = len(array)

    if(n>1):
        left = [0]*(n-1)
        a = array[n-1]
        for i in range(n-1):
            left[i] = array[i]
        left = sort(left)

        for i in range(n-1):
            if(left[i]>=a):
                left.insert(i, a)
                break
            elif(i == n-2):
                left.insert(i, a)
        array = left
    return array

array = [64,73,85,72,7,3,6,3,2,5,3,4,5,5,3,2,5,0,7,5,0,2,6,7,0,7,6,6755,46,24,25,26,78,93]
array = sort(array)
print(len(array), array)
