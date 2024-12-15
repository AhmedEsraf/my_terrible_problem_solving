# // Write a python program to find sum of all even numbers between 1 to n using loop

n = int(input("Enter n: "))
sum = 0
i = 1

while i<=n:
    if i%2==0 :
        sum = sum + i
    i= i +1
    
print(f"Sum= {sum}")
    
    
