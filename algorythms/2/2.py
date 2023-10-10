def factorize(n):
    factors = []  
    divisor = 2

    while n > 1:
        if (reshetoEratisfena(divisor)):
            if n % divisor == 0:
                factors.append(divisor)
                n //= divisor 
            else:
                divisor += 1 
        else:
            divisor += 1
            continue

    return factors

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
    
    return int(n) in listok


num = int(input("Введите целое число для факторизации: "))
result = factorize(num)
print("Простые множители:")
for factor in result:
    print(f"{factor}")
