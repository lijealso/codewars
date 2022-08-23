# https://www.codewars.com/kata/523f5d21c841566fde000009/train/python

def array_diff(a, b):
    for number_b in b:
        while number_b in a:
            a.remove(number_b)
    print(a)

a = [1,2]
b = [1]

array_diff(a, b)