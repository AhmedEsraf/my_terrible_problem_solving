# Python program to find all factors of a number


number = int(input("Enter a number: "))

print(f"Factors of {number} are: ", end="")


for i in range(1, number + 1):
    if number % i == 0: 
        print(i, end=" ")

print()
