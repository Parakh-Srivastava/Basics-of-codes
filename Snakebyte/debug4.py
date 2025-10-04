print("Temparature conversion tool :")
print("1 for C and 2 for F")
c = int(input("Enter (1 || 2)"))
if c == 1:
    c = float(input("Enter the temp in celcius : "))
    f = ((c/5)*9) + 32
    print(f"in F = {f}")
elif c == 2:
    f = float(input("Enter the temp in farenhiet : "))
    c = ((f - 32)/9)*5
    print(f"Temparature in C : {c}")
else:
    print("invalid choice")