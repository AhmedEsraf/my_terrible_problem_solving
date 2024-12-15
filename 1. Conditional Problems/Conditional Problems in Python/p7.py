# write a python program to input any alphabet and check whether it is vowel or consonant.

vowel = ['a','u','e','o','i']

ch = input("Enter Your Character: ").lower()

if ch in vowel:
    print(f"{ch} is a Vowel")
else:
    print(f"{ch} is a Consonant")