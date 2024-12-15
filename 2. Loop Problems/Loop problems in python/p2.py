# // Write a `python` program to print all alphabets from a to z. –using while loop

ch = 'a'

while ch <= 'z':
    print(ch,end=' ')
    ch = chr(ord(ch)+1)