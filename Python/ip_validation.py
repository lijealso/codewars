# https://www.codewars.com/kata/515decfd9dcfc23bb6000006/python

def is_valid_IP(strng):
    parts = strng.split('.')
    if len(parts) != 4:
        return False
    for part in parts:
        if not part.isdigit() or not 0 <= int(part) <= 255 or (part.startswith('0') and len(part) > 1):
            return False
    return True