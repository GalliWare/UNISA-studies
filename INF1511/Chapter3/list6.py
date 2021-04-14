tmplist = ['John', 'Kelly', 10, 'Carolina', 15, 'Steve', 'Katheline']
print("The original list is %a" % tmplist)
print("THe first four elements in the list are: %a" % tmplist[0:4])
print("The number of elements in the list are: %d" % len(tmplist))
m = input("Enter a name to add to the list: ")
tmplist.append(m)
print("List elements are now: %a" % tmplist)
n = int(input("Enter the element number to delete "))
del tmplist[n-1]
print("The elements in the list are now: %a" % tmplist)
print("The elements on the list can also be display as shown: ")
for i in range(0, len(tmplist)):
    print(tmplist[i])
print("or like below: ")
for element in tmplist:
    print(element)
