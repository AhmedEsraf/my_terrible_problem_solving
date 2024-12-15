# // Write a python program to print multiplication table of any number

n = int(input("Enter n: "))
i = 1

for f in range(1,11):
    print(f"{n} x {i} = {n*i}")
    i= i +1
    