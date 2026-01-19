def get_fact(n):
    result = 1
    if n > 0:
        while n > 0:
            result *= n
            n -= 1
        return result
    else: return 1

print(get_fact(5))
print(get_fact(-2))