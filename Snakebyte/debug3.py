print("Student attendance system")
students = ["Alex", "John", "Maya", "Sara"]
attendance = {
    "Alex" : True,
    "John" : False,
    "Maya" : True,
    "Sara" : True
}
for i in range(len(students)):
    print("Student : ",students[i])
    print("Present", attendance[students[i]])

present_count = 0
for key,value in attendance.items():
    if value == True:
        present_count += 1
    
print("Total present", present_count)
print("Total absent", len(students)- present_count)

if present_count /len(students) >= 0.75:
    print("Attandence status is good")
else:
    print("Attendance status is bad")