def sort(array):
    n = len(array)

    if(n>1):
        half = int(n/2)
        left = [0]*half
        right = [0]*(n-half)

        for i in range(half):
            left[i] = array[i]
        for i in range(n-half):
            right[i] = array[half+i]

        left = sort(left)
        right = sort(right)
        j = 0
        k = 0

        for i in range(n):

            if(k == (n-half)):
                array[i] = left[j]
                j += 1
            elif(j == half):
                array[i] = right[k]
                k += 1
            elif(left[j]<right[k]):
                array[i] = left[j]
                j += 1
            else:
                array[i] = right[k]
                k += 1

    return array
    
array = [64,73,85,72,7,3,6,3,2,5,3,4,5,5,3,2,5,0,7,5,0,2,6,7,0,7,6,6755,46,24,25,26,78,93]
array = sort(array)
print(len(array), array)
