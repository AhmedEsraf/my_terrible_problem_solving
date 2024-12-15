# Write a python program to convert a binary number into decimal.


n = int(input("Enter Valid Binary Number: "))



decimal = 0
remainder = 0
position = 0

while n != 0:
    remainder = n % 10
    decimal += remainder*(2**position)
    n = n // 10
    position+=1
    
    

print(f"decimal: {decimal}")