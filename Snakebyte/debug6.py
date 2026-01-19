def add_to_cart(items):
    cart = []
    cart.append(items)
    return cart

mondayshopping = add_to_cart("Apple")
tuesdayshopping = add_to_cart("Banana")
print(f"Monday : {mondayshopping}")
print(f"Tuesday : {tuesdayshopping}")