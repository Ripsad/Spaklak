def find_min_nod(a,b):
    while b:
        temp = a
        a = b
        b = temp % b 
    return a

def resulting_function(a,b,c):
    first = find_min_nod(a,b)
    second = find_min_nod(first, c)
    return second

a = int(input())
b = int(input())
c = int(input())

print(f'Solve: {resulting_function(a,b,c)}')