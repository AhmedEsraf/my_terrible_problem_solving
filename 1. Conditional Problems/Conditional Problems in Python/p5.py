# write a python program to check whether a year is a leap year or not.

y = int(input("Enter the Year: "))

if (y % 4 ==0 and y %100 !=0) or y %400==0:
    print(f"{y} is a Leap Year.")
else:
    print(f"{y} is a not Leap Year.")