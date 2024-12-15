# Python program to print all odd numbers between 1 to 100 using a while loop

i = 1
while i <= 100:
    if i % 2 != 0:  # Check if the number is odd
        print(i, end=" ")
    i += 1  # Increment the counter
