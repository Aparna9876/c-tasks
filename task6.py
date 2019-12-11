a = input("Enter the side: ")
b = input("Enter the side: ")
c = input("Enter the side: ")
if a == b and b == c:
    print("Equilateral triangle")
elif a == b or b == c or c == a:
    print("Isosceles triangle")
else:
    print("Scalene triangle")
