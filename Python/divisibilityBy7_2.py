num = int(input("Enter the number :"))
if(num % 7 == 0 or num % 2 == 0):
    if(num % 7 == 0 and num % 2 != 0):
        print(num, " is divisible by 7.")
    elif(num % 2 == 0 and num % 7 != 0):
        print(num, "is divisible by 2.")
    else:
        print(num, "is divisible by both 7 abd 2.")
else:
    print(num, "is divisible by neither 2 or 7.")