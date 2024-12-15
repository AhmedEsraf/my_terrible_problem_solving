# Write a python program to perform 1's compliment on a binary number.


n = int(input("Enter Valid Binary Number: "))

temp = n
summ = 0
position = 1
remainder = 0

while temp != 0:
    remainder = temp % 10
    temp = temp // 10
    
    if remainder == 1:
        summ += 0*position
    elif remainder == 0:
        summ+= 1*position
    
    position*= 10
    
print(f"1's Comp; {summ}")