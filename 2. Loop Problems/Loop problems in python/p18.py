# // Write a python program to print all Prime numbers between 1 to n

import math


n = int(input("Enter Your Number: "))


for j in range(1, n + 1):

    if j <= 1:
        continue 

    elif j == 2 or j == 3:
        print(j, end=" ") 

    elif j % 2 == 0 or j % 3 == 0:
        continue  

    else:
        is_prime = True 
       
        for i in range(5, int(math.sqrt(j)) + 1, 6):
            if j % i == 0 or j % (i + 2) == 0:
                is_prime = False  # Not prime
                break

        if is_prime:
            print(j, end=" ")  # Print the prime number
