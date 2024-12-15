# // write a program to check whether the number is a perfect square number or not

import math

# Input the number
n = int(input("Enter n: "))

# Calculate the integer square root
sqr = int(math.sqrt(n))

# Check if the square of the integer square root equals the original number
if sqr * sqr == n:
    print(f"{n} is a Perfect square Number")
else:
    print(f"{n} is not a Perfect square Number")
