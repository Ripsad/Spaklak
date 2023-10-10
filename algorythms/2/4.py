p = int(input('введите простое число '))
flag = 0
if p == 2:
    print("Простое")
    flag = 1
s = 4
k = 1
m = 2 ** p - 1
while k != p - 1:
    s = ((s * s) - 2) % m
    k += 1

if s == 0:
    print('Простое')
elif flag != 1:
    print('Составное')

#done