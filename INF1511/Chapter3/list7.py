names = []
num = int(input("How many names? "))
print("Enter %d names please: " % num)
for i in range(0, num):
    m = input()
    names.append(m)
print("The original list of names is %a" % names)
p = input("Search for a name:")
if p in names:
    print("The name %s is on list at location %d" % (p, names.index(p)+1))
else:
    print("The name %s in not on the list")
q = input("Enter the name to update/change: ")
if q in names:
    loc = names.index(q)
    r = input("Enter new name please: ")
    names[loc] = r
    print("The name %s in the list is now %s" % (q, r))
else:
    print("The name %s in not in the list." % q)
names.sort()
print("The names sorted look like %a" % names)
