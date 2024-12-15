

n = int(input("Enter n: "))

a= 1
b= 2
print("Fibonacci Sequence: ", end= " ")

for i in range(1,n+1):
    print(f"{a}",end=" ")
    next = a + b
    a = b
    b = next
    
    