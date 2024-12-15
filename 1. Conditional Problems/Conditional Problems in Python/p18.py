# Input an integer number
n = int(input("Enter a number between 99 and 1000: "))

# Check if the number is in the valid range
if n <= 99 or n >= 1000:
    print("Invalid Input")
else:
    # Extract the first digit by continuously dividing by 10
    while n > 9:
        n //= 10  # Use floor division to truncate the number
    
    print(f"First Digit is: {n}")
