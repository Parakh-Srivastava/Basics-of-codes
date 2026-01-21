data = [10, None, 20, None, None, 30]
i=0

filterData = []

for items in data:
    if items != None:
        filterData.append(items)

print(filterData) 
# Expected: [10, 20, 30]
# Actual: [10, 20, None, 30]