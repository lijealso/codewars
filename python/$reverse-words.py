# https://www.codewars.com/kata/5264d2b162488dc400000001/train/python~

def spin_words(sentence):
    # Your code goes here
    output = ''
    word1 = sentence.split(' ')
    for i in range(len(word1)):
        if len(word1[i]) >= 5:
            word1[i] = word1[i][::-1]
            output = output + word1[i] + ' '
        else:
            output = output + word1[i] + ' '
    
    print(output.strip())


sentence = input()
spin_words(sentence)    