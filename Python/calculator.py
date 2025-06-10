num1 = int(input("ENter the first number :"))
num2 = int(input("Enter the second number :"))
ope = input("Enter the operator among (+,-,*,/,^)")
ope = ope[0]
res = "N/A"
if(ope == '+'):
    res = num1 + num2
elif(ope == '-'):
    res = num1 - num2
elif(ope == '*'):
    res = num1 * num2
elif(ope == '/'):
    res = num1 / num2
elif(ope == '^'):
    res = num1 ** num2
else:
    print("Enter the correct variable!!")
print(num1, ope, num2, "=", res)