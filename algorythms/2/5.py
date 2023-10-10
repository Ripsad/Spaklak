a = int(input('Введите начало отрезка '))
b = int(input('введите конец отрезка '))
for i in range(a,b+1):
    solve = []
    for x in range(i):
        solve.append(x)
    print(f'{i}: {set(solve)}')