# write a python program to find maximum between three numbers

a,b,c = map(int,input("Enter a , b , c: ").split())

if a>b and a >c:
    print(f"{a} is highest number")
elif b >a and b>c:
    print(f"{b} is highest number")
elif c >a and c>b:
    print(f"{c} is highest number")
else:
    print("You have given multple numbers that have the same value.")
