# / Write a python program to count number of digits in a number

n = int(input("Enter n: "))
count = 0

while (n!= 0):
    n= n //10
    count = count + 1
    
print(f"Digit Count: {count}")