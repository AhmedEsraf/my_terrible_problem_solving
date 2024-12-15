# write a python program to input marks of five subjects (Physics, Chemistry, Biology, Mathematics, and Computer). Calculate percenta


marks = input("Enter marks of Physics, Chemistry, Biology, Mathematics, and ICT separated by spaces: ").split()


physics = float(marks[0])
chemistry = float(marks[1])
biology = float(marks[2])
math = float(marks[3])
ict = float(marks[4])


average = (physics + chemistry + biology + math + ict) / 5
print(f"Your Average Score: {average:.1f}")

3
if 90 <= average <= 100:
    print("Your Grade is A")
elif 80 <= average < 90:
    print("Your Grade is B")
elif 70 <= average < 80:
    print("Your Grade is C")
elif 60 <= average < 70:
    print("Your Grade is D")
elif 40 <= average < 50:
    print("Your Grade is E")
else:
    print("Your Grade is F")
