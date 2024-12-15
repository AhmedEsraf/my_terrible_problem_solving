# Input the size of the pattern
n = int(input("Enter n: "))

# Calculate middle points (not actively used in this specific pattern)
a = n // 2
b = n // 2

# Outer loop for rows
for i in range(1, n + 1):
    # Inner loop for columns
    for j in range(1, n + 1):
        # Logic for printing the pattern
        if j == 1 or (i == 1 and j < n) or (i == n and j < n) or (j == n and i != 1 and i != n):
            print("*", end="")
        else:
            print(" ", end="")
    print()  # Move to the next line
