import random
solve = []
random_first = random.randint(10000, 99999)
solve.append(random_first)
for i in range(9):
    random_first = int(str(random_first**2)[2:7]) # диапозон получаемых значени 9 - 10, поэтому мы +- так берем серидину
    solve.append(random_first)

print(f'Output: {solve}')