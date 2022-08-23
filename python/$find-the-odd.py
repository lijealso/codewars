# https://www.codewars.com/kata/54da5a58ea159efa38000836/train/python

def find_it(seq):
    if len(seq) == 1:
        print(seq[0])
    if len(seq) > 2:
        for number in seq:
            x = seq.count(number)
            if x % 2 != 0:
                print(number)
                break


seq = [0]

find_it(seq)