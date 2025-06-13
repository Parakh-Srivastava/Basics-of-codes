count = int(input("Enter the number of elements you want :"))
num1 = 0
num2 = 1
print(num1)
print(num2)
for i in range(0,count-2):
    newNum = num1 + num2
    print(newNum)
    num1 = num2
    num2 = newNum
