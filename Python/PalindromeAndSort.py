array = [12, 39, 45, 56, 45, 39, 12]
array2 = array.copy()
array2.reverse()
if(array == array2):
    print(array, "is a palindrome.")
else:
    print(array, "is not a palindrome")
array3 = ["C", "D", "A", "A", "B", "B", "A"]
print(array3.count('A'))
array3.sort()
print(array3)