Array = [3, 6, 4 ,6, 10, 7]
for i in range(0,len(Array) - 1):
    for i in range(0,len(Array)-1):
        if(Array[i] >= Array[i+1]):
            Array[i] = Array[i] + Array[i+1]
            Array[i+1] = Array[i] - Array[i+1]
            Array[i] = Array[i] - Array[i+1]
print(Array)