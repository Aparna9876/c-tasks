odd = 0
even = 0
for i in (5,6,8,9,2,3,7,1):
    if i % 2 == 0:
        even = even+1
    else:
        odd = odd+1
print("Number of even numbers: ",even)
print("Number of odd numbers: ",odd)
