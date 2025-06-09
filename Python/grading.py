marks = float(input("Enter your marks :"))
if(marks >= 90 and marks<= 100):
    grade = 'A'
    print("According to your marks your grade is", grade)
elif(marks < 90 and marks >= 80):
    grade = 'B'
    print("According to your marks your grade is", grade)
elif(marks < 80 and marks >= 70):
    grade = 'C'
    print("According to your marks your grade is", grade)
elif(marks < 70 and marks >= 0):
    grade = 'D'
    print("According to your marks your grade is", grade)
else:
    print("Enter a valid number you retard......")