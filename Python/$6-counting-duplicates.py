# https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/python

def duplicate_count(text):
    # Your code goes here
    text = text.lower()
    print(text)
    list1 = []
    for letter in text:
        if text.count(letter) > 1:
            list1.append(letter)

    # remove duplicates from list
    res = []
    [res.append(x) for x in list1 if x not in res]

    print(len(res))


text = "Aa11"

duplicate_count(text)