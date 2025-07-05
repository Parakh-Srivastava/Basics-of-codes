dictionary = {
    "table" : ["a piece of furniture", "list of facts and figures"],
    "cat" : "a small animal",
}
print(dictionary)

values = {("fl" , 9.0),("in" , 9)}
print(values)

subs = {}
updating = {
    "phy" : int(input("Enter the number in Physics :")),
    "chem" : int(input("Enter the number in Chemistry :")),
    "maths" : int(input("Enter the number in Maths :"))
}
subs.update(updating)
print(subs)