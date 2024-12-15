# // Write a python program to print all natural numbers in reverse (from n to 1). –using loop

n = int(input("Enter n: "))

for i in range(n, 0, -1):
    print(i, end=" ")
