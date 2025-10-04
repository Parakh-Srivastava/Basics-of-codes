balance = 1000
print("\t\t\t\tWelcome to ATM service")
pin = int(input("Enter your 4 digit pin : "))
if pin == 1234:
    withdraw = int(input("Enter the amount to withdraw : "))
    if withdraw <= balance:
        balance = balance - withdraw
        print("Transaction successful !!")
        print("remaining balance = ", balance)
    elif withdraw == 0:
        print("0 withdrawal not allowed")
    else:
        print("Insufficiant balance ")
else:
    print("Wrong pin")
print("Thanks for using atm")