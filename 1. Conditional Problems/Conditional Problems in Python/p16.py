# //  write a program that takes three integers as input,
# //   representing the sides of a triangle, and determines if it's a right triangle. 
# //  If so, determine whether the triangle is equilateral, isosceles, or scalene

a, b, c = map(int, input("Enter the value for a, b, c: ").split())

# Check if the sides form a valid triangle
if a + b <= c or a + c <= b or b + c <= a:
    print("The sides do not form a triangle.")
else:
    # Check if it is a right triangle
    if a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
        print("It is a right triangle.")
    else:
        print("It is not a right triangle.")

    # Classify the triangle
    if a == b == c:
        print("The triangle is equilateral.")
    elif a == b or b == c or a == c:
        print("The triangle is isosceles.")
    else:
        print("The triangle is scalene.")
