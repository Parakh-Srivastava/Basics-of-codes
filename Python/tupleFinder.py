numbers = (1, 4, 9, 16, 25, 36, 49, 64, 81, 100)
numToFind = int(input("Enter the number you want to find :"))
counter = 0
condition = False
while(counter != len(numbers)):
    if(numbers[counter] == numToFind):
        print(f"The number was in {counter + 1} position.")
        condition = True
        break
    counter += 1
if(condition != True):
    print("The number was not in the list")