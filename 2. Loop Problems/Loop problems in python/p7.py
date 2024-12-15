# // Write a python program to calculate sum of digits of a number

n = int(input("Enter number: "))
sum = 0
temp = 0

while (n!=0):
    temp = n % 10
    n = n//10 
    sum = sum + temp
    
print(f"Sum: {sum}")