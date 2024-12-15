# // Write a python program to check whether a number is Prime number or not

import math


n = int(input("Enter Your Number: "))


if n <= 1:
    print(f"{n} is not a Prime.")
elif n == 2 or n == 3:
    print(f"{n} is a Prime.")
elif n % 2 == 0 or n % 3 == 0:
    print(f"{n} is not a Prime.")
else:
    
    is_prime = True  # Assume the number is prime
    for i in range(5, int(math.sqrt(n)) + 1, 6):
        if n % i == 0 or n % (i + 2) == 0:
            print(f"{n} is not a Prime.")
            is_prime = False
            break

  
   
    if is_prime:
        print(f"{n} is a Prime.")
