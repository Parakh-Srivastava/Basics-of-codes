name = input("Enter student name. ")
num_subjects = int(input("How many subjects : "))
marks = []
for i in range(1, num_subjects + 1):
    m = int(input("Enter the marks : "))
    if m < 100 or m == 100:
        marks.append(m)
total = sum(marks)
average = total / num_subjects 
print("student ", name)
print("marks", marks)
print("Total marks ", total)
print("Average marks ", average)
print("result", "Pass" if average > 50 else "Fail")