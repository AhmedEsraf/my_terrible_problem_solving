# // Read four integer values A, B, C, and D. Then, 
# // if B is greater than C and D is greater than A and 
# // if the sum of C and D is greater than the sum of A and B, and 
# // if C and D are positive values and A is even, print YES; otherwise, print NO


a, b, c, d = map(int, input("Enter values for a, b, c, and d: ").split())

# Check the conditions
if b > c and d > a and (c + d) > (a + b) and c > 0 and d > 0 and a % 2 == 0:
    print("YES")
else:
    print("NO")
