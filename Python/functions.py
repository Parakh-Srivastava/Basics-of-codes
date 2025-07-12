def len_list(list):
    return len(list)

def ele_list(list):
    for i in range(0,len(list)):
        print(list[i], end=" ")
    print()
    
def USD_INR(usd):
    return usd * 85.74

def factorial(n):
    fact = 1
    for i in range(1,n + 1):
        fact *= i
    return fact

print(len_list([1, 2, 3, 4, 5, 6, 7, 8]))
ele_list([1, 2, 3, 4, 5, 6, 8, 7])
print(USD_INR(2))
print(factorial(4))