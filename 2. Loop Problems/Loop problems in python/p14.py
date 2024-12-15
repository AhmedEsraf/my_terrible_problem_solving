# Python program to calculate the factorial of a number


number = int(input("Enter a number: "))


if number < 0:
    print("Factorial of a negative number is not defined.")
else:
    factorial = 1  
   
    for i in range(1, number + 1):
        factorial *= i
    print(f"Factorial of {number} = {factorial}")
