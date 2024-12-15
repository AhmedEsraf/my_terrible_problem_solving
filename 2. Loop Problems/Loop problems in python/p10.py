# Python program to find the frequency of each digit in a given integer

n = int(input("Enter a number: "))
n = abs(n)  # Ensure n is positive in case of negative input

# Loop through digits from 0 to 9
for digit in range(10):
    count = 0
    temp = n  # Copy of n to work with

    # Count the occurrences of the current digit
    while temp != 0:
        if temp % 10 == digit:
            count += 1
        temp = temp // 10  # Remove the last digit

    # Print the frequency if the digit occurs
    if count > 0:
        print(f"Digit {digit} appears {count} times.")
