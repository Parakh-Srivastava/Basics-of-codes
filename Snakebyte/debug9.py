def check_username(new_user, existing_users):
    for user in existing_users:
        if new_user.lower() == user.lower():
            return "Username taken!"
    return "Username available!"

users = ["Admin", "Coder123", "Pythonista"]

# Test it
print(check_username("Admin", users))      # Should say Taken
print(check_username("Pythonista", users)) # Should say Taken