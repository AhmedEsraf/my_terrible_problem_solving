# // Write a python program to check whether a number is palindrome or not

n = int(input("Enter number: "))
reverse = int(str(n)[::  -1])
print(f" Reverse: {reverse}\n")

if n == reverse:
    print(f"{n} is a plaindrome")
else:
    print(f"{n} is a not plaindrome")
    