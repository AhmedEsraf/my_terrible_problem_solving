# // Write a python program to convert a decimal number into binary.

n = int(input("Enter a Valid decimal Number: "))


remainder = 0
position = 1
summ = 0


while n!=0:
    remainder = n % 2
    summ += remainder*position
    n = n // 2
    position*=10
    
print(f"Binary: {summ}")