def no_space(x):
    result = ''
    for i in range (len(x)):
        if x[i] != ' ':
            result = result + x[i]
    return result