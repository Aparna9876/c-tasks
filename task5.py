month=input("Enter the month :");
list1=["January", "March", "May", "July", "August", "October", "December"];
list2=["april", "June", "September", "November"];
if month in list1:
    days=31;
elif month in list2:
    days=30;
else:
    days=28;
print("No. of days= ", days);
