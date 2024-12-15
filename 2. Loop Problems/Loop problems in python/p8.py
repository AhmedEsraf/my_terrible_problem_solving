#  Write a python program to enter a number and print its reverse

n = int(input("Enter number: "))
reverse = int(str(n)[::  -1])
print(f" Reverse: {reverse}")