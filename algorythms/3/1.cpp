// просто изменил
// сам код нерабочий


def find_max(lst):
    max_number = lst[0]
    for num in lst[1:]:
        if num > max_number:
            max_number = num
    return max_number
