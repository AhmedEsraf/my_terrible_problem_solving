#  write a python program to check whether a character is uppercase or lowercase alphabet.

ch = input("Enter Your Character: ")

if (ch.islower()):
    print(f"{ch} is lowercase letter")
elif (ch.isupper()):
    print(f"{ch} is uppercase letter")
else:
    print(f"{ch} is not an Alphabet")