# // Write a C program to print Pascal triangle up to n rows

n = int(input("Enter n: "))

for i in range (n):
    num = 1
    
    print(" "*(n-i-1),end="")
    
    for j in range(i+1):
        print(f"{num}",end=" ")
        num = num * (i-j) // (j+1)
        
    print() # moves to next line