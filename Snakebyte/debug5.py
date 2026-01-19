def calculate_average(nums):
    total = 0
    for n in nums:
        total += n

    average = total/len(nums)
    return average

numbers = [10,20,30,40,50]
print(f"The average number is {calculate_average(nums=numbers)}")