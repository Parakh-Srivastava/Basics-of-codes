num1 = int(input("Enter the first number :"))
num2 = int(input("Enter the second number :"))
num3 = int(input("Enter the thord number :"))
if(num1 > num2 and num1 > num3):
    print(num1, "is the greater than", num2, "and", num3, ".")
elif(num2 > num1 and num2 > num3):
    print(num2, "is the greater than", num1, "and", num3, ".")
elif(num3 > num1 and num3 > num2):
    print(num3, "is the greater than", num1, "and", num2, ".")
else:
    print("enter 3 distinct numbers dude!!\nIts not that Hard!!!")