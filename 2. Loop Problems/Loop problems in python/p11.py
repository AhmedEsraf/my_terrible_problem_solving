# Write a python program to print all ASCII character with their values.

ch = 0

while ch <= 127:
    char = chr(ch)
    print(f" {char} = {ch}")
    ch += 1