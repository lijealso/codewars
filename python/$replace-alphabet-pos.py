# https://www.codewars.com/kata/546f922b54af40e1e90001da/train/python


def alphabet_position(text):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    text = text.lower()
    result = ''
    for letter in text:
        if letter.isalpha():
            result = result + ' ' + str(alphabet.index(letter) + 1)
    print(result.lstrip(' '))


text = input("Enter your text: ").lower()

alphabet_position(text)