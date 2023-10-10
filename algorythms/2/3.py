def reshetoEratisfena(n):
    listok = [int(x) for x in range(2,int(n)+1)]
    p = -1
    move = 0
    checker = 1
    while checker:
        checker = 0
        p += 1
        for x in range(len(listok)):
            if x >= len(listok):
                break
            if listok[x] % listok[p] == 0 and listok[p] != listok[x]:
                checker = 1
                listok.pop(x)
    
    if int(n) in listok:
        print('Простое')
    else:
        print('Сложноe')

def ferma(n):
    m = int(n**0.5)
    for x in range(1,n):
        q = (m + x) ** 2 - n
        if (int(q**0.5) == q**0.5):
            print(f'Два простых множителя: {abs(q**0.5-(m+x))}, {abs(q**0.5+(m+x))}')
            print('Первое число:')
            reshetoEratisfena(abs(q**0.5-(m+x)))
            print('Второе число:')
            reshetoEratisfena(abs(q**0.5+(m+x)))
            break

ferma(19691)