# // write a program that takes three angles (in degrees) as 
# // input and determines whether they can form a valid triangle. 
# // If they can, classify the triangle as equilateral, isosceles, or scalene.

# Input the three angles of the triangle
a, b, c = map(int, input("Enter the values of a, b, c: ").split())

# Check if the angles form a valid triangle (sum of angles must be 180)
if a + b + c == 180:
    # Check the classification of the triangle
    if a == 60 and b == 60 and c == 60:
        print("The triangle is equilateral.")
    elif a == b or b == c or a == c:
        print("The triangle is isosceles.")
    else:
        print("The triangle is scalene.")
else:
    print("The angles do not form a valid triangle.")
