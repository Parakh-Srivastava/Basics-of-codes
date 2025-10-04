item = {
    "carrot" : 12,
    "brinjal" : 6,
    "rice" : 45,
    "chicken" : 23
}

bought_item = []

while True:
    i = input("Enter a vegetable : (from items) : ")
    if i.lower() in item.keys():
      bought_item.append(i)
    else:
      print("not in list !!")
    Yn = input("Do you wish for anything else ? ")
    if Yn[0].lower() == 'n':
       break
    
totalp = 0

print("\t\t\tLIST")
for j in range(len(bought_item)):
   
   totalp +=  item[bought_item[j]]
   print(bought_item[j], " : ", item[bought_item[j]])
TGST = totalp*1.05
print(f"Total price (with 5 GST) = {TGST:.2f}")