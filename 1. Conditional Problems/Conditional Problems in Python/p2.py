# write a python program to check whether a number is divisible by 5 and 11 or not

n = int(input("Enter n: "))

if n % 5 == 0 and n % 11 == 0:
    print(f"{n}is divisisble by 5 and 11")
else:
    print(f"{n}given number is not divisisble by 5 and 11")