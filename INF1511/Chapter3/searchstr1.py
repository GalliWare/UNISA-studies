p = input("Enter a string: ")
print("Enter string is %s" % p)
q = input("Enter the substring to search: ")
r = p.find(q)
if r == -1:
    print("%s not found in %s" % (p, q))
else:
    print("%s found in %s at location %d" % (q, p, r+1))
