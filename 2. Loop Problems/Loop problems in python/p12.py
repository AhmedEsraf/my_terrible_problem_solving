# Python program to calculate power of a number using a for loop


n = int(input("Enter the number (base): "))
power = int(input("Enter the power (exponent): "))


result = 1


for i in range(1, power + 1):
    result *= n  

print(f"Result = {result}")
