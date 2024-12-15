#  write a python program to input any character and check whether it is alphabet, digit, or special character.

ch = input("Enter Your Character: ")

if (ch.isalpha()):
    print(f"{ch} is an Alphbet")
elif (ch.isdigit()):
    print(f"{ch} is a Digit")
else:
    print(f"{ch} is a special symbol")
    