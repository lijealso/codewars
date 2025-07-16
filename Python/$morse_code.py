# https://www.codewars.com/kata/54b724efac3d5402db00065e/python

MORSE_CODE = {
    '.-':     'A',
    '-...':   'B',
    '-.-.':   'C',
    '-..':    'D',
    '.':      'E',
    '..-.':   'F',
    '--.':    'G',
    '....':   'H',
    '..':     'I',
    '.---':   'J',
    '-.-':    'K',
    '.-..':   'L',
    '--':     'M',
    '-.':     'N',
    '---':    'O',
    '.--.':   'P',
    '--.-':   'Q',
    '.-.':    'R',
    '...':    'S',
    '-':      'T',
    '..-':    'U',
    '...-':   'V',
    '.--':    'W',
    '-..-':   'X',
    '-.--':   'Y',
    '--..':   'Z',
    '-----':  '0',
    '.----':  '1',
    '..---':  '2',
    '...--':  '3',
    '....-':  '4',
    '.....':  '5',
    '-....':  '6',
    '--...':  '7',
    '---..':  '8',
    '----.':  '9',
    '.-.-.-': '.', 
    '--..--': ',', 
    '..--..': '?',
    '-.-.--': '!',
    '-..-.':  '/',
    '-....-': '-',
    '.----.': "'",
    '.-..-.': '"',
    '-.--.':  '(',
    '-.--.-': ')',
    '...---...': 'SOS'
}

morse_code = '      ...---... -.-.--   - .... .   --.- ..- .. -.-. -.-   -... .-. --- .-- -.   ..-. --- -..-   .--- ..- -- .--. ...   --- ...- . .-.   - .... .   .-.. .- --.. -.--   -.. --- --. .-.-.-  '

def decode_morse(morse_code):
    # Remember - you can use the preloaded MORSE_CODE dictionary:
    # For example: 
    # MORSE_CODE['.-'] = 'A'
    # MORSE_CODE['--...'] = '7'
    # MORSE_CODE['...-..-'] = '$'
    morse_code.strip()  # Remove leading/trailing whitespace
    words = morse_code.split('   ')  # Split by 3 spaces for words
    decoded_message = ''
    for word in words:
        letters = word.split(' ')
        decoded_word = ''.join(MORSE_CODE[letter] for letter in letters if letter in MORSE_CODE)
        decoded_message += decoded_word + ' '
    return decoded_message.strip()

print(decode_morse(morse_code))