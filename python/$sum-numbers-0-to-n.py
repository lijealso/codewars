def show_sequence(n):
    sum = 0
    dest2 = ''
    if n < 0:
        dest = str(n) + '<0'
        return dest
    elif n == 0:
        dest = "0=0"
        return dest
    else:
        for i in range(n+1):
            sum += i
            if i < n:
                dest = str(i) + '+'
            elif i == n:
                 dest = str(i) + ' = '
            dest2 += dest
        dest2 = dest2 + str(sum)
        print(dest2)
        return dest2

show_sequence(10)