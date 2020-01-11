list=[];
length=[];
n=int(input("Enter number of different words you want to enter:"));
for i in range(n):
    list.append(input("Enter a word:"));
for j in range(len(list)):
    l=len(list[i]);
    length.append(l);
print("The Length of the Longest word is",max(length));
