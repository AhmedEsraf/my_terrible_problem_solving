# write a C program to input the basic salary of an employee and calculate 
#  its Gross salary according to the following:
# Basic Salary <= 10000: HRA = 20%, DA = 80% Basic Salary <= 20000: HRA = 25%, DA = 90%Basic Salary > 20000: HRA = 30%, DA = 95


salary = float(input("Enter Your Salary: "))


if salary <= 10000:
    gross_salary = salary * 0.8 + salary * 0.2 + salary
elif salary > 10000 and salary <= 20000:
    gross_salary = salary + salary * 0.25 + salary * 0.9
elif salary > 20000:
    gross_salary = salary * 0.3 + salary * 0.95 + salary
else:
    print("Invalid Input")
    gross_salary = 0  


print(f"Gross Salary: {gross_salary:.2f}")
