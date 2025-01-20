def sort(array, l):
    n = len(array)
    
    if(n>l and n>1):
        half = int(n/2)

        left = [0]*half
        right = [0]*(n-half)

        for i in range(half):
            left[i] = array[i]
        for i in range(n-half):
            right[i] = array[half+i]
        
        left = sort(left, l)
        right = sort(right, l)
        j = 0
        k = 0

        for i in range(n):

            if(k==(n-half)):
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
    else:
        for i in range(1,n):
            a = array[i]
            j=i-1

            while(j>=0 and a<array[j]):
                array[j+1] = array[j]
                j -= 1
            array[j+1] = a
            
    return array

array = [64,73,85,72,7,3,6,3]
l = 7
array = sort(array, l)
print(array)
 