# Python program to find the GCD of two numbers using Euclidean Algorithm


num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))


a, b = num1, num2
while b != 0:
    remainder = a % b
    a = b
    b = remainder


print(f"GCD of {num1} and {num2} is {a}")
