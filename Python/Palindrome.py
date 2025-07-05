word = input("Enter the word :")
wordInput = word.lower()
listInput = list(wordInput)
palindromeCheck = []
for i in range(0,len(word)):
    palindromeCheck.append(wordInput[len(word) - 1 - i])
if(palindromeCheck == listInput):
    print("It is a palindrome")
else:
    print("It is not a palindrome")