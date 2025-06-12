Array = [ 6, 3, 4, 10, 6]
for i in range(0,4):
    for i in range(0,4):
        if(Array[i] <= Array[i+1]):
            Array[i] = Array[i+1] + Array[i] #a = 10 // b = 5 | a = 15
            Array[i+1] = Array[i] - Array[i+1] #b = 10
            Array[i] = Array[i] - Array[i+1] #a = 5
print(Array)