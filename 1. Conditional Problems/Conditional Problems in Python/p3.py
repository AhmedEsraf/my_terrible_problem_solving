# write a python program to check whether a number is negative, positive, or zero

n = float(input("Enter n: "))
if n>0:
    print(f"{n} is Positive")
elif n<0:
    print(f"{n} is negative")
else:
    print(f"{n} is Zero")