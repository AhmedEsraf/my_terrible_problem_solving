# // Write a python program to find LCM of two numbers

num1 , num2 = map(int,input("Enter Two Numbers: ").split())
temp = 0
remainder = 0

a = num1
b = num2

if a < b:
   a, b = b, a
    
while b!= 0:
    remainder = a % b
    a = b
    b = remainder
    
gcd = a
lcm = (num1*num2)//gcd

print(f"LCM of {num1} and {num2}: {lcm}")